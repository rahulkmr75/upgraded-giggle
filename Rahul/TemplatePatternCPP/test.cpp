#include "Tea.cpp"
#include "Coffee.cpp"

int main(){
    CaffeineBeverage* tea = (CaffeineBeverage *)(new Tea());
    CaffeineBeverage* coffee = (CaffeineBeverage *)(new Coffee());
    tea->prepare();
    coffee->prepare();

    tea->setDecoratingHook(false);
    tea->prepare();
    return 0;
}