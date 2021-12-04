#include <inc/WeatherStation.hpp>
#include <inc/WeatherObserver.hpp>
#include <inc/WeatherData.hpp>

////////////////////
// WeatherStation //
////////////////////
WeatherStation::WeatherStation(const std::string& place) : mObservers(new WeatherObserverPtrArray()), mWeatherInfo(), mPlace(place) {}

WeatherStation::~WeatherStation() {}

WeatherStationPtr WeatherStation::create(const std::string& place) {
	return WeatherStationPtr(new WeatherStation(place));
}

WeatherObserverPtrArrayPtr WeatherStation::getObservers() {
	return mObservers;
}

WeatherDataConstPtr WeatherStation::getWeatherData() {
	return mWeatherInfo;
}

std::string WeatherStation::getLocation() const {
	return mPlace;
}

void WeatherStation::setNewWeatherData(WeatherDataConstPtr const& newWeatherInfo) {
	if (newWeatherInfo->getLocation() != mPlace) {
		throw "This is a weather station for " + mPlace + ". Will accept data only relevant to this location!";
	}
	mWeatherInfo = newWeatherInfo;
	measurementsChanged();
}

void WeatherStation::measurementsChanged() {
	notifyObservers();
}

void WeatherStation::notifyObservers() {
	WeatherDataConstPtr weatherData(getWeatherData());

	for (size_t i = 0; i < mObservers->size(); i++) {
		mObservers->at(i)->update(weatherData);
	}
}

void WeatherStation::subscribe(WeatherObserverPtr const& observer) {
	mObservers->push_back(observer);
}

// Slow...better use a hash table
void WeatherStation::unSubscribe(WeatherObserverPtr const& observer) {
	for (size_t i = 0; i < mObservers->size(); i++) {
		if (mObservers->at(i) == observer) {
			mObservers->erase(mObservers->begin() + i);
			break;
		}
	}
}