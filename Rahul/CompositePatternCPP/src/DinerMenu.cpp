#include <DinerMenu.hpp>

void DinerMenu::display()const{
    for(AbstractMenuPtr p : menu)
        p->display();
}
void DinerMenu::addChild(AbstractMenuPtr menuItem){
    menu.push_back(menuItem);
}
void DinerMenu::removeChild(AbstractMenuPtr menuItem){
    for(int i = 0 ; i < menu.size() ; ++i){
        if(menu[i] == menuItem)menu.erase(menu.begin() + i);
    }
}
AbstractMenuIteratorPtr DinerMenu::getIterator(){
    return AbstractMenuIteratorPtr((AbstractMenuIterator *)(new DinerMenuIterator(menu)));

}
DinerMenu::~DinerMenu(){}