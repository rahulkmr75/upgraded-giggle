#ifndef __BEVERAGE_HPP__
#define __BEVERAGE_HPP__

#include <string>

#include <inc/PtrMacros.hpp>

//////////////
// Beverage //
//////////////
FORWARD_DECLARE_CLASS_PTRS(Beverage)
class Beverage {
public:
	virtual ~Beverage();

	// Beverage interface
	virtual std::string getDescription() const = 0;
	virtual double getCost() const = 0;

protected:
	Beverage();
};

#endif // !__BEVERAGE_HPP__

