#ifndef __WEATHER_DATA_HPP__
#define __WEATHER_DATA_HPP__

#include <inc/PtrMacros.hpp>
#include <String>

/////////////////
// WeatherData //
/////////////////
FORWARD_DECLARE_CLASS_PTRS(WeatherData)
class WeatherData {
public:
	static WeatherDataConstPtr create(const double& temperature, const double& pressure, const double& humidity, const std::string& place);

	double getTemperature() const;
	double getPressure() const;
	double getHumidity() const;
	std::string getLocation() const;

	virtual ~WeatherData();
private:
	WeatherData(const double& temperature, const double& pressure, const double& humidity, const std::string& place);

	double mTemperature;
	double mPressure;
	double mHumidity;
	std::string mPlace;
};

#endif

