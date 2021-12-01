#ifndef __USEFUL_MACROS__
#define __USEFUL_MACROS__
#include <memory>

#define FWD_DECL_CLASS(name) \
class name;\
typedef std::shared_ptr<name> name##Ptr;\
typedef std::shared_ptr<const name> name##ConstPtr

#endif