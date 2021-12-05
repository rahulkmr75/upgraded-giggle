#ifndef __CONCRETE_CONDIMENTS_HPP__
#define __CONCRETE_CONDIMENTS_HPP__

#include <inc/CondimentDecorator.hpp>

///////////
// Mocha //
///////////
FORWARD_DECLARE_CLASS_PTRS(Mocha)
class Mocha : public CondimentDecorator {
public:
	static MochaConstPtr create(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage);

	virtual ~Mocha();
private:
	Mocha(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage);
};

//////////
// Milk //
//////////
FORWARD_DECLARE_CLASS_PTRS(Milk)
class Milk : public CondimentDecorator {
public:
	static MilkConstPtr create(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage);

	virtual ~Milk();
private:
	Milk(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage);
};

/////////
// Soy //
/////////
FORWARD_DECLARE_CLASS_PTRS(Soy)
class Soy : public CondimentDecorator {
public:
	static SoyConstPtr create(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage);

	virtual ~Soy();
private:
	Soy(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage);
};

//////////
// Whip //
//////////
FORWARD_DECLARE_CLASS_PTRS(Whip)
class Whip : public CondimentDecorator {
public:
	static WhipConstPtr create(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage);

	virtual ~Whip();
private:
	Whip(const std::string& description, const double& cost, BeverageConstPtr const& underlyingBeverage);
};

#endif
