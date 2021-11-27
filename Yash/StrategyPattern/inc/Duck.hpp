#ifndef __DUCK_HPP__
#define __DUCK_HPP__

#include <memory>
#include <string>

#include <inc/UsefulMacros.hpp>

// Forward Declarations
FORWARD_DECLARE_CLASS_PTRS(FlyBehaviour)
FORWARD_DECLARE_CLASS_PTRS(SoundBehaviour)

////////////////
// Abstract Duck
////////////////

class AbstractDuck {
public:
	virtual std::string fly() const;
	virtual std::string makeSound() const;
	virtual std::string display() const = 0;

	// Data member accessors
	virtual FlyBehaviourConstPtr getFlyBehaviour() const;
	virtual SoundBehaviourConstPtr getSoundBehaviour() const;

	virtual ~AbstractDuck();

protected:
	AbstractDuck(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour);

private:
	FlyBehaviourConstPtr mFlyBehaviour;
	SoundBehaviourConstPtr mSoundBehaviour;
};

///////////////
// Vanilla Duck
///////////////
FORWARD_DECLARE_CLASS_PTRS(VanillaDuck)
class VanillaDuck : public AbstractDuck {
public:
	static VanillaDuckConstPtr create(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour);

	virtual std::string display() const override final;

	virtual ~VanillaDuck();

private:
	VanillaDuck(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour);
};

///////////////
// Redhead Duck
///////////////
FORWARD_DECLARE_CLASS_PTRS(RedheadDuck)
class RedheadDuck : public AbstractDuck {
public:
	static RedheadDuckConstPtr create(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour);

	virtual std::string display() const override final;

	virtual ~RedheadDuck();

private:
	RedheadDuck(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour);
};

///////////
// Toy Duck
///////////
FORWARD_DECLARE_CLASS_PTRS(ToyDuck)
class ToyDuck : public AbstractDuck {
public:
	static ToyDuckConstPtr create(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour);

	virtual std::string display() const override final;

	virtual ~ToyDuck();

private:
	ToyDuck(const FlyBehaviourConstPtr& flyBehaviour, const SoundBehaviourConstPtr& soundBehaviour);
};

#endif