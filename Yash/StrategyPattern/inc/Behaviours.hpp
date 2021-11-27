#ifndef __BEHAVIOUR_HPP__
#define __BEHAVIOUR_HPP__

#include <string>

///////////////////////////////// 
// Abstract fly behaviour class
/////////////////////////////////
class FlyBehaviour {
public:
	// Interface functions
	virtual std::string fly() const = 0;
	virtual double getSpeed() const;

	virtual ~FlyBehaviour();

protected:
	FlyBehaviour(const double speed);

private:
	double mSpeed;
};


///////////////////////////////////
// Abstract sound behaviour class
///////////////////////////////////
class SoundBehaviour {
public:
	// Interface functions
	virtual std::string makeSound() const = 0;
	virtual double getLoudness() const;

	virtual ~SoundBehaviour();

protected:
	SoundBehaviour(const double loudness);

private:
	double mLoudness;
};

#endif