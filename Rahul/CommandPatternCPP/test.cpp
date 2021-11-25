#include "Remote.cpp"
#include "LightOnCommand.cpp"
#include "LightOffCommand.cpp"
#include "LightLivingRoom.cpp"
#include "CeilingFan.cpp"
#include "CeilingFanOffCommand.cpp"
#include "CeilingFanStepCommand.cpp"
#include "Stereo.cpp"
#include "StereoOffCommand.cpp"
#include "StereoOnCommand.cpp"
#include "StereoVolumeDecreaseCommand.cpp"
#include "StereoVolumeIncreaseCommand.cpp"

int main(){
    Remote * remote = new Remote();
    LightLivingRoom* lightLivingRoom = new LightLivingRoom();
    CeilingFan * ceilingFan = new CeilingFan();
    Stereo * stereo = new Stereo();

    remote->setLSlot(0 , (Command *)(new LightOffCommand(lightLivingRoom)));
    remote->setRSlot(0 , (Command *)(new LightOnCommand(lightLivingRoom)));
    

    remote->setLSlot(1 , (Command *)(new CeilingFanOffCommand(ceilingFan)));
    remote->setRSlot(1 , (Command *)(new CeilingFanStepCommand(ceilingFan)));

    remote->setLSlot(2 , (Command *)(new StereoOnCommand(stereo)) );
    remote->setRSlot(2 , (Command *)(new StereoOnCommand(stereo)));
    remote->setLSlot(3 , (Command *)( new StereoVolumeDecreaseCommand(stereo)));
    remote->setRSlot(3 , (Command *)( new StereoVolumeIncreaseCommand(stereo)));

    remote->pressR(1);
    remote->pressR(2);
    remote->pressL(3);
    remote->pressL(2);
    remote->pressUndo();
    remote->pressR(4);
    remote->pressL(1);
    remote->pressR(1);
    remote->pressR(2);
    remote->pressL(3);
    remote->pressUndo();
    remote->pressL(2);
    remote->pressL(0);
    remote->pressR(0);
    remote->pressUndo();
    remote->pressL(1);
    remote->pressL(3);
    remote->pressR(3);
    remote->pressR(1);
    remote->pressUndo();
    remote->pressL(3);
    remote->pressR(3);
    remote->pressR(1);
    remote->pressL(1);
    remote->pressR(2);
    remote->pressUndo();

    return 0;

}