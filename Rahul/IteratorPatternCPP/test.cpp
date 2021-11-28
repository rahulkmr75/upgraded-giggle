#include "inc\IMenu.hpp"
#include "inc\DinerMenu.hpp"
#include "inc\PubMenu.hpp"
#include "inc\IMenuIterator.hpp"
#include "inc\MenuItem.hpp"

int main(){
    IMenu * dinerMenu = (IMenu *)(new DinerMenu());
    IMenu * pubMenu = (IMenu *)(new PubMenu());

    pubMenu->addItem("Craft Beer" , 280 , "Crafted and home made beer");
    pubMenu->addItem("L.I.T.", 400 , "Famous Long Island Tea");
    pubMenu->addItem("Vodka shots" , 300 , "Vodka shot 30 mL");

    dinerMenu->addItem("Sandwich" , 150 , "Brown bread with fresh veggies");
    dinerMenu->addItem("Scrambled Eggs" , 200, "Deep fried scramble eggs");

    IMenuIterator * pubMenuIterator = pubMenu->getIterator();
    IMenuIterator * dinerMenuIterator = dinerMenu->getIterator();


    while(pubMenuIterator->hasNext()){
        MenuItem *m = pubMenuIterator->next();
        m->display();
    }

    while(dinerMenuIterator->hasNext()){
        MenuItem *m = dinerMenuIterator->next();
        m->display();
    }
    return 0;
}