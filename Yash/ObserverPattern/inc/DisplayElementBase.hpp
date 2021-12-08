#ifndef __BASE_DISPLAY_HPP__
#define __BASE_DISPLAY_HPP__

#include <string>

/////////////////
// BaseDisplay //
/////////////////
class BaseDisplay {
public:
	virtual std::string display() const = 0;

	virtual ~BaseDisplay();
};

#endif
