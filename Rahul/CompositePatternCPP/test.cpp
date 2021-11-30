#include <DinerMenu.hpp>
#include <DinerDesertMenu.hpp>
#include <PubMenu.hpp>
#include <MenuItem.hpp>

int main(){
    AbstractMenuPtr dinerMenu((AbstractMenu *)new DinerMenu());

    AbstractMenuPtr egg((AbstractMenu *)new MenuItem("Scrambled Egg" , 150 , "Seasoned scrambled egg"));
    AbstractMenuPtr omlette((AbstractMenu *)new MenuItem("Omlette" , 120 , "Mild fried omlette seasoned with herb and spices"));
    AbstractMenuPtr toast((AbstractMenu *)new MenuItem("French Toast" , 200 , "Toast bread with butter"));
    dinerMenu->addChild(egg);
    dinerMenu->addChild(omlette);
    dinerMenu->addChild(toast);
    
    AbstractMenuPtr desertmenu((AbstractMenu *)new DinerDessertMenu());
    AbstractMenuPtr brownie((AbstractMenu *)new MenuItem("Brownie" , 250 , "Chocolate brownie"));
    AbstractMenuPtr forest((AbstractMenu *)new MenuItem("Black Forest" , 270 , "Black Forest Pastry"));
    AbstractMenuPtr chocolate((AbstractMenu *)new MenuItem("Hot chocolate" , 300 , "Hot chocolate served with milk"));
    AbstractMenuPtr jamun((AbstractMenu *)new MenuItem("Gulab Jamun" , 200 , "Gulab jamun with kaju"));
    desertmenu->addChild(brownie);
    desertmenu->addChild(forest);
    desertmenu->addChild(chocolate);
    desertmenu->addChild(jamun);
    dinerMenu->addChild(desertmenu);

    AbstractMenuPtr pubMenu((AbstractMenu *)new PubMenu());
    AbstractMenuPtr beer((AbstractMenu *)new MenuItem("Beer" , 300 , "Craft Beer"));
    AbstractMenuPtr vodka((AbstractMenu *)new MenuItem("Vodka" , 350 , "Vodka shots"));
    AbstractMenuPtr whiskey((AbstractMenu *)new MenuItem("Whiskey" , 300 , "Whiskey on the rocks"));
    AbstractMenuPtr lit((AbstractMenu *)new MenuItem("LIT" , 300 , "Long Island Tea"));
    pubMenu->addChild(beer);
    pubMenu->addChild(vodka);
    pubMenu->addChild(whiskey);
    pubMenu->addChild(lit);

    dinerMenu->display();
    pubMenu->display();
    return 0;
}