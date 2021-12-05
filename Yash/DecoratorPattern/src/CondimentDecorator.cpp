#include <inc/CondimentDecorator.hpp>

////////////////////////
// CondimentDecorator //
////////////////////////
CondimentDecorator::CondimentDecorator(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage) : Beverage(), mCondimentDescription(description), mCondimentCost(cost), mUnderlyingBeverage(underlyingBeverage) {}

CondimentDecorator::~CondimentDecorator() {}

BeverageConstPtr CondimentDecorator::getUnderlyingBeverage() const {
	return mUnderlyingBeverage;
}

std::string CondimentDecorator::getDescription() const {
	return getUnderlyingBeverageDescription() + ", " + getCondimentDescription();
}

double CondimentDecorator::getCost() const {
	return getUnderlyingBeverageCost() + getCondimentCost();
}

double CondimentDecorator::getUnderlyingBeverageCost() const {
	return mUnderlyingBeverage->getCost();
}

std::string CondimentDecorator::getUnderlyingBeverageDescription() const {
	return mUnderlyingBeverage->getDescription();
}

double CondimentDecorator::getCondimentCost() const {
	return mCondimentCost;
}
std::string CondimentDecorator::getCondimentDescription() const {
	return mCondimentDescription;
}