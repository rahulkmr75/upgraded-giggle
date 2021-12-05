#ifndef __BASE_COFFEE_HPP__
#define __BASE_COFFEE_HPP__

#include <string>

#include <inc/PtrMacros.hpp>
#include <inc/Beverage.hpp>

////////////////
// BaseCoffee //
////////////////
FORWARD_DECLARE_CLASS_PTRS(BaseCoffee)
class BaseCoffee : public Beverage {
public:
	virtual ~BaseCoffee();

	// Beverage interface
	virtual std::string getDescription() const override final;
	virtual double getCost() const override final;

protected:
	BaseCoffee(const std::string& description, const double& cost);

private:
	std::string mDescription;
	double mCost;
};
#endif // !__BASE_COFFEE_HPP__