#include <iostream>

#include <inc/Behaviours.hpp>
#include <inc/FlyBehaviours.hpp>
#include <inc/SoundBehaviours.hpp>
#include <inc/Duck.hpp>

int main() {
	FlyWithWingsConstPtr wingFly = FlyWithWings::create(5.7);
	CantFlyConstPtr noFly = CantFly::create();

	QuackConstPtr quacker = Quack::create(23.4);
	SqueakConstPtr squeaker = Squeak::create(24.7);
	MuteConstPtr quiet = Mute::create();

	VanillaDuckConstPtr vanillaQuackerDuck = VanillaDuck::create(wingFly, quacker);
	RedheadDuckConstPtr redheadQuackerDuck = RedheadDuck::create(wingFly, quacker);
	VanillaDuckConstPtr vanillaQuietDuck = VanillaDuck::create(wingFly, quiet);
	ToyDuckConstPtr toyDuck = ToyDuck::create(noFly, squeaker);

	std::cout << "Duck 1 : \n";
	std::cout << vanillaQuackerDuck->display() << "\n";
	std::cout << vanillaQuackerDuck->makeSound() << "\n";
	std::cout << vanillaQuackerDuck->fly() << "\n\n";

	std::cout << "Duck 2 : \n";
	std::cout << redheadQuackerDuck->display() << "\n";
	std::cout << redheadQuackerDuck->makeSound() << "\n";
	std::cout << redheadQuackerDuck->fly() << "\n\n";

	std::cout << "Duck 3 : \n";
	std::cout << vanillaQuietDuck->display() << "\n";
	std::cout << vanillaQuietDuck->makeSound() << "\n";
	std::cout << vanillaQuietDuck->fly() << "\n\n";

	std::cout << "Duck 4 : \n";
	std::cout << toyDuck->display() << "\n";
	std::cout << toyDuck->makeSound() << "\n";
	std::cout << toyDuck->fly() << "\n\n";

	return 0;
}