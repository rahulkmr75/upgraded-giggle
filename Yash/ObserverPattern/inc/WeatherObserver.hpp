#ifndef __WEATHER_OBSERVER_HPP__
#define __WEATHER_OBSERVER_HPP__

#include <inc/PtrMacros.hpp>

FORWARD_DECLARE_CLASS_PTRS(WeatherData)

/////////////////////
// WeatherObserver //
/////////////////////
class WeatherObserver {
public:
	virtual void update(WeatherDataConstPtr newWeatherInfo);

	WeatherDataConstPtr getWeatherData() const;

	virtual ~WeatherObserver();

protected:
	WeatherObserver();

private:
	WeatherDataConstPtr mWeatherInfo;
};

#endif
