#include <inc/SoundBehaviours.hpp>

//////////////
// Quack class
//////////////
Quack::Quack(const double loudness) : SoundBehaviour(loudness) {}

Quack::~Quack() {}

QuackConstPtr Quack::create(const double loudness) {
	return QuackConstPtr(new Quack(loudness));
}

std::string Quack::makeSound() const {
	return "Quacking at " + std::to_string(getLoudness()) + " dB";
}

//////////////
// Squeak class
//////////////
Squeak::Squeak(const double loudness) : SoundBehaviour(loudness) {}

Squeak::~Squeak() {}

SqueakConstPtr Squeak::create(const double loudness) {
	return SqueakConstPtr(new Squeak(loudness));
}

std::string Squeak::makeSound() const {
	return "Squeaking at " + std::to_string(getLoudness()) + " dB";
}

//////////////
// Mute class
//////////////
Mute::Mute() : SoundBehaviour(0.0) {}

Mute::~Mute() {}

MuteConstPtr Mute::create() {
	return MuteConstPtr(new Mute());
}

std::string Mute::makeSound() const {
	return "Trying hard. Alas I can't!";
}