#ifndef __AVG_DISPLAY_HPP__
#define __AVG_DISPLAY_HPP__

#include <inc/DisplayElementBase.hpp>
#include <inc/WeatherObserver.hpp>

////////////////
// AvgDisplay //
////////////////
FORWARD_DECLARE_CLASS_PTRS(AvgDisplay)
class AvgDisplay : public WeatherObserver, public BaseDisplay {
public:
	static AvgDisplayPtr create();

	// Display interface
	virtual std::string display() const override final;

	~AvgDisplay();
private:
	AvgDisplay();
};

#endif