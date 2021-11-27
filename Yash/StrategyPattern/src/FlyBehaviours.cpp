#include <inc/FlyBehaviours.hpp>

/////////////////////
// FlyWithWings class
/////////////////////
FlyWithWings::FlyWithWings(const double speed) : FlyBehaviour(speed) {}

FlyWithWings::~FlyWithWings() {}

FlyWithWingsConstPtr FlyWithWings::create(const double speed) {
	return FlyWithWingsConstPtr(new FlyWithWings(speed));
}

std::string FlyWithWings::fly() const {
	return "Flying with my wings at the speed of " + std::to_string(getSpeed()) + "kmph";
}


////////////////
// CantFly Class
////////////////
CantFly::CantFly() : FlyBehaviour(0.0) {}

CantFly::~CantFly() {}

CantFlyConstPtr CantFly::create() {
	return CantFlyConstPtr(new CantFly());
}

std::string CantFly::fly() const {
	return "I am grounded! I can't fly.";
}