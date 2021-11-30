#include <PubMenu.hpp>

void PubMenu::display()const{
    for(int i = 0 ; i < size ; ++i)
        menu[i]->display();
}

void PubMenu::addChild(AbstractMenuPtr menuItem){
    if(size >= MaxSize){
        std::cout<<"Space Full, Can't add anymore items to Pub Menu\n";
        return;
    }
    menu[size] = menuItem;
    size++;
}

void PubMenu::removeChild(AbstractMenuPtr menuItem){
    int ptr = -1;
    for(int i = 0 ; i < size ; ++i){
        if(menu[i] == menuItem)
            ptr = i;
    }
    if(ptr != -1){
        for(int i = ptr + 1; i < size ; i++)
            menu[i-1] = menu[i];
        size--;
    }
}
AbstractMenuIteratorPtr PubMenu::getIterator(){
    return AbstractMenuIteratorPtr((AbstractMenuIterator *)(new PubMenuIterator(menu , size)));
}
PubMenu::~PubMenu(){}