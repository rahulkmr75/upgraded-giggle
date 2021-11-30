#include <AbstractMenu.hpp>

void AbstractMenu::addChild(AbstractMenuPtr menuItem){
    std::cout<<"Default Implementation does nothing\n";
}
void AbstractMenu::removeChild(AbstractMenuPtr menuItem){
    std::cout<<"Default Implementation does nothing\n";
}
AbstractMenu::~AbstractMenu(){}