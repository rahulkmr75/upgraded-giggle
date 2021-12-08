#include <inc/WeatherData.hpp>

/////////////////
// WeatherData //
/////////////////
WeatherData::WeatherData(const double& temperature, const double& pressure, const double& humidity, const std::string& place) : mTemperature(temperature), mPressure(pressure), mHumidity(humidity), mPlace(place) {}

WeatherData::~WeatherData() {}

WeatherDataConstPtr WeatherData::create(const double& temperature, const double& pressure, const double& humidity, const std::string& place) {
	return WeatherDataConstPtr(new WeatherData(temperature, pressure, humidity, place));
}

double WeatherData::getTemperature() const {
	return mTemperature;
}

double WeatherData::getPressure() const {
	return mPressure;
}

double WeatherData::getHumidity() const {
	return mHumidity;
}

std::string WeatherData::getLocation() const {
	return mPlace;
}