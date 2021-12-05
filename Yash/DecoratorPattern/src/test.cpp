#include <iostream>

#include <inc/Coffees.hpp>
#include <inc/ConcreteCondiments.hpp>

// Ideally description, cost of a type is fixed, hence stupid to have in constructor. Maybe stored in db or some sort of config. 
// This is just to get the flavour of decorator pattern
int main() {
	// I can also create a drink that has both latte and esspresso...
	LatteConstPtr latte = Latte::create("LATTE", 0.23);
	EsspressoConstPtr esspresso = Esspresso::create("ESSPRESSO", 0.15);
	FrappeConstPtr frappe = Frappe::create("FRAPPE", 0.25);

	BeverageConstPtr beverage1 = Whip::create("Whip", 0.15, Milk::create("Milk", 0.08, latte));
	BeverageConstPtr beverage2 = Mocha::create("Mocha", 0.19, Soy::create("Soy", 0.17, Whip::create("Whip", 0.15, Mocha::create("Mocha", 0.19, esspresso))));

	std::cout << beverage1->getDescription() << " : " << beverage1->getCost() << "\n";
	std::cout << beverage2->getDescription() << " : " << beverage2->getCost() << "\n";
	return 0;
}