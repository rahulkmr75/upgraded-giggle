#ifndef __MENU_ITEM__
#define __MENU_ITEM__
#include <string>
#include <iostream>

class MenuItem{
    public:
    MenuItem(std::string name , int cost , std::string description);
    std::string getName();
    int getCost();
    std::string getDescription();
    void display();

    private: 
    std::string name;
    int cost;
    std::string description;
};
#endif