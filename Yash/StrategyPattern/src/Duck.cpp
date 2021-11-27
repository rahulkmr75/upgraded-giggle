#include <inc/Duck.hpp>

#include <inc/Behaviours.hpp>

///////////////
// Abstract Duck
///////////////
AbstractDuck::AbstractDuck(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour) : mFlyBehaviour(flyBehaviour), mSoundBehaviour(soundBehaviour) {}

AbstractDuck::~AbstractDuck() {}

FlyBehaviourConstPtr AbstractDuck::getFlyBehaviour() const {
	return mFlyBehaviour;
}

SoundBehaviourConstPtr AbstractDuck::getSoundBehaviour() const {
	return mSoundBehaviour;
}

std::string AbstractDuck::fly() const {
	return getFlyBehaviour()->fly();
}

std::string AbstractDuck::makeSound() const {
	return getSoundBehaviour()->makeSound();
}

///////////////
// Vanilla Duck
///////////////
VanillaDuck::VanillaDuck(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour) : AbstractDuck(flyBehaviour, soundBehaviour) {}

VanillaDuck::~VanillaDuck() {}

VanillaDuckConstPtr VanillaDuck::create(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour){
	return VanillaDuckConstPtr(new VanillaDuck(flyBehaviour, soundBehaviour));
}

std::string VanillaDuck::display() const {
	return "A plain simple vanilla duck.";
}

///////////////
// Redhead Duck
///////////////
RedheadDuck::RedheadDuck(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour) : AbstractDuck(flyBehaviour, soundBehaviour) {}

RedheadDuck::~RedheadDuck() {}

RedheadDuckConstPtr RedheadDuck::create(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour) {
	return RedheadDuckConstPtr(new RedheadDuck(flyBehaviour, soundBehaviour));
}

std::string RedheadDuck::display() const {
	return "I have red hair. Rahul loves them!";
}

///////////////
// Toy Duck
///////////////
ToyDuck::ToyDuck(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour) : AbstractDuck(flyBehaviour, soundBehaviour) {}

ToyDuck::~ToyDuck() {}

ToyDuckConstPtr ToyDuck::create(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour) {
	return ToyDuckConstPtr(new ToyDuck(flyBehaviour, soundBehaviour));
}

std::string ToyDuck::display() const {
	return "Reporting for debugging duty!";
}