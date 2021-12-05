#ifndef __COFFEE_HPP__
#define __COFFEE_HPP__

#include <string>

#include <inc/PtrMacros.hpp>
#include <inc/BaseCoffe.hpp>

///////////
// Latte //
///////////
FORWARD_DECLARE_CLASS_PTRS(Latte)
class Latte : public BaseCoffee {
public:
	static LatteConstPtr create(const std::string& description, const double& cost);

	virtual ~Latte();

private:
	Latte(const std::string& description, const double& cost);
};

///////////////
// Esspresso //
///////////////
FORWARD_DECLARE_CLASS_PTRS(Esspresso)
class Esspresso : public BaseCoffee {
public:
	static EsspressoConstPtr create(const std::string& description, const double& cost);

	virtual ~Esspresso();

private:
	Esspresso(const std::string& description, const double& cost);
};

////////////
// Frappe //
////////////
FORWARD_DECLARE_CLASS_PTRS(Frappe)
class Frappe : public BaseCoffee {
public:
	static FrappeConstPtr create(const std::string& description, const double& cost);

	virtual ~Frappe();

private:
	Frappe(const std::string& description, const double& cost);
};

#endif // !__COFFEE_HPP__
