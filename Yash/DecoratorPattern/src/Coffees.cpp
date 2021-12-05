#include <inc/Coffees.hpp>

///////////
// Latte //
///////////
Latte::Latte(const std::string& description, const double& cost) : BaseCoffee(description, cost) {}

Latte::~Latte() {}

LatteConstPtr Latte::create(const std::string& description, const double& cost) {
	return LatteConstPtr(new Latte(description, cost));
}

///////////////
// Esspresso //
///////////////
Esspresso::Esspresso(const std::string& description, const double& cost) : BaseCoffee(description, cost) {}

Esspresso::~Esspresso() {}

EsspressoConstPtr Esspresso::create(const std::string& description, const double& cost) {
	return EsspressoConstPtr(new Esspresso(description, cost));
}

////////////
// Frappe //
////////////
Frappe::Frappe(const std::string& description, const double& cost) : BaseCoffee(description, cost) {}

Frappe::~Frappe() {}

FrappeConstPtr Frappe::create(const std::string& description, const double& cost) {
	return FrappeConstPtr(new Frappe(description, cost));
}