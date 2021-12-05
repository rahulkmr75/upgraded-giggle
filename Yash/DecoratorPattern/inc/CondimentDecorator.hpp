#ifndef __CONDIMENT_DECORATOR_HPP__
#define __CONDIMENT_DECORATOR_HPP__

#include <string>

#include <inc/PtrMacros.hpp>
#include <inc/Beverage.hpp>

////////////////////////
// CondimentDecorator //
////////////////////////
FORWARD_DECLARE_CLASS_PTRS(CondimentDecorator)
class CondimentDecorator : public Beverage {
public:
	virtual ~CondimentDecorator();

	// Beverage Interface
	virtual std::string getDescription() const override final;
	virtual double getCost() const override final;

	// CondimentDecorator Interface
	BeverageConstPtr getUnderlyingBeverage() const;
	double getCondimentCost() const;
	std::string getCondimentDescription() const;
	double getUnderlyingBeverageCost() const;
	std::string getUnderlyingBeverageDescription() const;

protected:
	CondimentDecorator(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage);

private:
	BeverageConstPtr mUnderlyingBeverage;

	std::string mCondimentDescription;
	double mCondimentCost;
};

#endif