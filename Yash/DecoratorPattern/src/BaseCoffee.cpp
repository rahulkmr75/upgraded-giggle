#include <inc/BaseCoffe.hpp>

////////////////
// BaseCoffee //
////////////////
BaseCoffee::BaseCoffee(const std::string& description, const double& cost) : mDescription(description), mCost(cost) {}

BaseCoffee::~BaseCoffee() {}

std::string BaseCoffee::getDescription() const {
	return mDescription;
}

double BaseCoffee::getCost() const {
	return mCost;
}