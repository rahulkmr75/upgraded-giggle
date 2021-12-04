#include <inc/ForeCastDisplay.hpp>
#include <inc/WeatherData.hpp>

/////////////////////
// ForecastDisplay //
/////////////////////
ForecastDisplay::ForecastDisplay() : WeatherObserver(), BaseDisplay() {}

ForecastDisplay::~ForecastDisplay() {}

ForecastDisplayPtr ForecastDisplay::create() {
	return ForecastDisplayPtr(new ForecastDisplay());
}

std::string ForecastDisplay::display() const {
	if (!getWeatherData())
	{ throw "Don't have any data to display"; }

	return "Forecast of weather at " + getWeatherData()->getLocation() + " is : \nTemp : " + std::to_string(getWeatherData()->getTemperature()) + "\nPressure : " + std::to_string(getWeatherData()->getPressure()) + "\nHumidity is : " + std::to_string(getWeatherData()->getHumidity()) + "\n";
}