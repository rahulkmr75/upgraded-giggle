#include <iostream>
#include <memory>
#include <vector>
#include <AbstractMenu.hpp>
#include <DinerMenuIterator.hpp>
#include <DinerDesertMenu.hpp>

void DinerDessertMenu::display()const{
    for(AbstractMenuConstPtr p : menu)
        p->display();
}
void DinerDessertMenu::addChild(AbstractMenuPtr menuItem){
    menu.push_back(menuItem);
}
void DinerDessertMenu::removeChild(AbstractMenuPtr menuItem){
    for(int i = 0 ; i < menu.size() ; ++i){
        if(menu[i] == menuItem)menu.erase(menu.begin() + i);
    }
}
AbstractMenuIteratorPtr DinerDessertMenu::getIterator(){
    return AbstractMenuIteratorPtr((AbstractMenuIterator *)(new DinerMenuIterator(menu)));
}
DinerDessertMenu::~DinerDessertMenu(){}
