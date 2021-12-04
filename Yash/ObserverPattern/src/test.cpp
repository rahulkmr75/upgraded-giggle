#include <iostream>

#include <inc/WeatherStation.hpp>
#include <inc/WeatherData.hpp>
#include <inc/ForeCastDisplay.hpp>
#include <inc/CurrentDisplay.hpp>
#include <inc/AvgDisplay.hpp>

int main() {
	WeatherStationPtr station = WeatherStation::create("Mumbai");
	
	CurrentDisplayPtr display1 = CurrentDisplay::create();
	ForecastDisplayPtr display2 = ForecastDisplay::create();
	AvgDisplayPtr display3 = AvgDisplay::create();

	station->subscribe(display1);
	station->subscribe(display2);
	station->subscribe(display3);

	WeatherDataConstPtr currentWeather = WeatherData::create(35.7, 4.54, 54.54, "Mumbai");
	station->setNewWeatherData(currentWeather);

	std::cout<<display1->display()<<"\n";
	std::cout<<display2->display()<<"\n";
	std::cout<<display3->display()<<"\n";

	station->unSubscribe(display2);
	WeatherDataConstPtr updatedWeather = WeatherData::create(21.7, 2.54, 37.54, "Mumbai");
	station->setNewWeatherData(updatedWeather);

	std::cout << display1->display() << "\n";
	std::cout << display2->display() << "\n";
	std::cout << display3->display() << "\n";
	return 0;
}