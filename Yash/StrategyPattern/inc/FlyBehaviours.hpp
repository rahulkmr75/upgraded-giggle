#ifndef __FLY_HPP__
#define __FLY_HPP__

#include <memory>
#include <string>

#include <inc/UsefulMacros.hpp>

#include <inc/Behaviours.hpp>

/////////////////////
// FlyWithWings class
/////////////////////

FORWARD_DECLARE_CLASS_PTRS(FlyWithWings)
class FlyWithWings : public FlyBehaviour {
public:
	// create function
	static FlyWithWingsConstPtr create(const double speed);

	// FlyBehaviour Interface
	virtual std::string fly() const override final;

	virtual ~FlyWithWings();

private:
	FlyWithWings(const double speed);
};

////////////////
// CantFly Class
////////////////

FORWARD_DECLARE_CLASS_PTRS(CantFly)
class CantFly : public FlyBehaviour {
public:
	// create function
	static CantFlyConstPtr create();

	// FlyBehaviour Interface
	virtual std::string fly() const override final;
	
	virtual ~CantFly();

private:
	CantFly();
};

#endif