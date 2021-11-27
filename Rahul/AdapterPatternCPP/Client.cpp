#include "AdapterTurkey.cpp"
#include "NormalTurkey.cpp"

int main(){
    Turkey * normalTureky = (Turkey *)(new NormalTurkey());
    Turkey * adapterTurkey = (Turkey *)(new AdapterTurkey());

    normalTureky->gobble();
    normalTureky->fly();
    adapterTurkey->gobble();
    adapterTurkey->fly();
    return 0;
}