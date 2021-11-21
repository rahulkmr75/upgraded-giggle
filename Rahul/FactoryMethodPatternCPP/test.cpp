#include "Mobile.cpp"
#include "ChineseMobileFactory.cpp"
#include "IndianMobileFactory.cpp"


int main(){

    MobileFactory * chineseFactory = (MobileFactory * )(new ChineseMobileFactory());
    MobileFactory * indianFactory = (MobileFactory * )(new ChineseMobileFactory());

    Mobile * vivoMobile = chineseFactory->orderMobile(5.3 , std::string("Vivo Mobile") ,
        std::string("Qualcomm"));
    vivoMobile->display();
    Mobile *micromaxMobile = indianFactory->orderMobile(6.2 , std::string("Micromax Phone") , 
        std::string("Exynos"));
    micromaxMobile->display();
    return 0;
}