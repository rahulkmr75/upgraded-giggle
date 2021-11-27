#include <inc/Behaviours.hpp>

///////////////////////////////// 
// Abstract fly behaviour class
/////////////////////////////////
FlyBehaviour::FlyBehaviour(const double speed) : mSpeed(speed) {}

FlyBehaviour::~FlyBehaviour() {}

double FlyBehaviour::getSpeed() const {
	return mSpeed;
}


///////////////////////////////////
// Abstract sound behaviour class
///////////////////////////////////
SoundBehaviour::SoundBehaviour(const double loudness) : mLoudness(loudness) {}

SoundBehaviour::~SoundBehaviour() {}

double SoundBehaviour::getLoudness() const {
	return mLoudness;
}