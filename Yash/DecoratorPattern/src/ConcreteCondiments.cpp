#include <inc/ConcreteCondiments.hpp>

///////////
// Mocha //
///////////
Mocha::Mocha(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage) : CondimentDecorator(description, cost, underlyingBeverage) {}

Mocha::~Mocha() {}

MochaConstPtr Mocha::create(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage) {
	return MochaConstPtr(new Mocha(description, cost, underlyingBeverage));
}

//////////
// Milk //
//////////
Milk::Milk(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage) : CondimentDecorator(description, cost, underlyingBeverage) {}

Milk::~Milk() {}

MilkConstPtr Milk::create(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage) {
	return MilkConstPtr(new Milk(description, cost, underlyingBeverage));
}

/////////
// Soy //
/////////
Soy::Soy(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage) : CondimentDecorator(description, cost, underlyingBeverage) {}

Soy::~Soy() {}

SoyConstPtr Soy::create(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage) {
	return SoyConstPtr(new Soy(description, cost, underlyingBeverage));
}

//////////
// Whip //
//////////
Whip::Whip(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage) : CondimentDecorator(description, cost, underlyingBeverage) {}

Whip::~Whip() {}

WhipConstPtr Whip::create(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage) {
	return WhipConstPtr(new Whip(description, cost, underlyingBeverage));
}