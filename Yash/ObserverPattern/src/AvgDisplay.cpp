#include <inc/AvgDisplay.hpp>
#include <inc/WeatherData.hpp>

////////////////
// AvgDisplay //
////////////////
AvgDisplay::AvgDisplay() : WeatherObserver(), BaseDisplay() {}

AvgDisplay::~AvgDisplay() {}

AvgDisplayPtr AvgDisplay::create() {
	return AvgDisplayPtr(new AvgDisplay());
}

std::string AvgDisplay::display() const {
	if (!getWeatherData())
	{ throw "Don't have any data to display"; }
	
	return "Avg weather at " + getWeatherData()->getLocation() + " is : \nTemp : " + std::to_string(getWeatherData()->getTemperature()) + "\nPressure : " + std::to_string(getWeatherData()->getPressure()) + "\nHumidity is : " + std::to_string(getWeatherData()->getHumidity()) + "\n";
}