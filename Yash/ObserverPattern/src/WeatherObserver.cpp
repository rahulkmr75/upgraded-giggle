#include <inc/WeatherObserver.hpp>

/////////////////////
// WeatherObserver //
/////////////////////
WeatherObserver::WeatherObserver() : mWeatherInfo() {}

WeatherObserver::~WeatherObserver() {}

WeatherDataConstPtr WeatherObserver::getWeatherData() const {
	return mWeatherInfo;
}

void WeatherObserver::update(WeatherDataConstPtr newWeatherInfo) {
	if (!newWeatherInfo)
	{ throw "Station is being stupid. Sending nulls!"; }
	mWeatherInfo = newWeatherInfo;
}