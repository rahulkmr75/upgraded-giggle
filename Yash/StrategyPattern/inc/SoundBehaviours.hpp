#ifndef __SOUND_HPP__
#define __SOUND_HPP__

#include <memory>
#include <string>

#include <inc/UsefulMacros.hpp>

#include <inc/Behaviours.hpp>

//////////////
// Quack class
//////////////

FORWARD_DECLARE_CLASS_PTRS(Quack)
class Quack : public SoundBehaviour {
public:
	// create function
	static QuackConstPtr create(const double loudness);

	// SoundBehaviour Interface
	virtual std::string makeSound() const override final;

	virtual ~Quack();

private:
	Quack(const double loudness);
};

///////////////
// Squeak class
///////////////

FORWARD_DECLARE_CLASS_PTRS(Squeak)
class Squeak : public SoundBehaviour {
public:
	// create function
	static SqueakConstPtr create(const double loudness);

	// SoundBehaviour Interface
	virtual std::string makeSound() const override final;

	virtual ~Squeak();

private:
	Squeak(const double loudness);
};

///////////////
// Mute class
///////////////

FORWARD_DECLARE_CLASS_PTRS(Mute)
class Mute : public SoundBehaviour {
public:
	// create function
	static MuteConstPtr create();

	// SoundBehaviour Interface
	virtual std::string makeSound() const override final;

	virtual ~Mute();

private:
	Mute();
};

#endif