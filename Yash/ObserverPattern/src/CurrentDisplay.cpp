#include <inc/CurrentDisplay.hpp>
#include <inc/WeatherData.hpp>

////////////////////
// CurrentDisplay //
////////////////////
CurrentDisplay::CurrentDisplay() : WeatherObserver(), BaseDisplay() {}

CurrentDisplay::~CurrentDisplay() {}

CurrentDisplayPtr CurrentDisplay::create() {
	return CurrentDisplayPtr(new CurrentDisplay());
}

std::string CurrentDisplay::display() const {
	if (!getWeatherData())
	{ throw "Don't have any data to display"; }

	return "Current weather at " + getWeatherData()->getLocation() + " is : \nTemp : " + std::to_string(getWeatherData()->getTemperature()) + "\nPressure : " + std::to_string(getWeatherData()->getPressure()) + "\nHumidity is : " + std::to_string(getWeatherData()->getHumidity()) + "\n";
}