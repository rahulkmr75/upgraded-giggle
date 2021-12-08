#ifndef __MACROS_HPP__
#define __MACROS_HPP__

#include <memory>
#include <vector>

#define DECLARE_PTRS(name)\
typedef std::shared_ptr<name> name##Ptr;\
typedef std::shared_ptr<const name> name##ConstPtr;

#define FORWARD_DECLARE_CLASS(name)\
class name;

#define FORWARD_DECLARE_CLASS_PTRS(name)\
FORWARD_DECLARE_CLASS(name)\
DECLARE_PTRS(name)

#define FORWARD_DECLARE_CLASS_PTRS_ARRAY_PTR(name)\
FORWARD_DECLARE_CLASS_PTRS(name) \
typedef std::vector<name##Ptr> name##Ptr##Array; \
typedef std::vector<name##ConstPtr> name##ConstPtr##Array; \
DECLARE_PTRS(name##Ptr##Array) \
DECLARE_PTRS(name##ConstPtr##Array)

#endif
