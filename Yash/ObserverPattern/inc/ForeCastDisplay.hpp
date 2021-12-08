#ifndef __FORECAST_DISPLAY_HPP__
#define __FORECAST_DISPLAY_HPP__

#include <inc/DisplayElementBase.hpp>
#include <inc/WeatherObserver.hpp>

/////////////////////
// ForecastDisplay //
/////////////////////
FORWARD_DECLARE_CLASS_PTRS(ForecastDisplay)
class ForecastDisplay : public WeatherObserver, public BaseDisplay {
public:
	static ForecastDisplayPtr create();

	// Display interface
	virtual std::string display() const override final;

	~ForecastDisplay();
private:
	ForecastDisplay();
};

#endif

