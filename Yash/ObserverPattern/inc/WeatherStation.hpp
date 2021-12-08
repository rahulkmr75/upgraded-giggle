#ifndef __WEATHER_STATION_HPP__
#define __WEATHER_STATION_HPP__

#include <inc/PtrMacros.hpp>
#include <string>

FORWARD_DECLARE_CLASS_PTRS(WeatherData)
FORWARD_DECLARE_CLASS_PTRS_ARRAY_PTR(WeatherObserver)
////////////////////
// WeatherStation //
////////////////////
FORWARD_DECLARE_CLASS_PTRS(WeatherStation)
class WeatherStation {
public:
	static WeatherStationPtr create(const std::string& place);

	WeatherObserverPtrArrayPtr getObservers();
	WeatherDataConstPtr getWeatherData();
	std::string getLocation() const;

	void setNewWeatherData(WeatherDataConstPtr const& newWeatherInfo);

	void subscribe(WeatherObserverPtr const& observer);
	void unSubscribe(WeatherObserverPtr const& observer);
	void notifyObservers();
	void measurementsChanged();


	virtual ~WeatherStation();

private:
	WeatherStation(const std::string& place);

	WeatherObserverPtrArrayPtr mObservers; // Rather than an array it is better to have a hash table for faster look-ups
	WeatherDataConstPtr mWeatherInfo;
	const std::string mPlace;
};

#endif

