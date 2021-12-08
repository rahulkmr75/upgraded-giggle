#ifndef __CURRENT_DISPLAY_HPP__
#define __CURRENT_DISPLAY_HPP__

#include <inc/DisplayElementBase.hpp>
#include <inc/WeatherObserver.hpp>

////////////////////
// CurrentDisplay //
////////////////////
FORWARD_DECLARE_CLASS_PTRS(CurrentDisplay)
class CurrentDisplay : public WeatherObserver, public BaseDisplay {
public:
	static CurrentDisplayPtr create();

	// Display interface
	virtual std::string display() const override final;

	~CurrentDisplay();
private:
	CurrentDisplay();
};

#endif
