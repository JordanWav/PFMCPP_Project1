#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       dog
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog sleeps
dog.sleep();
//  action 3:   the dog eats
dog.eat();

//  2)
//  Noun:       computer
//  action 1:   the computer starts Windows
computer.startWindows();
//  action 2:   the computer runs startup applications
computer.runStartupApps();
//  action 3:   the computer restarts
computer.restart();

//  3)
//  Noun:       musicPlayer
//  action 1:   the music player plays a song
musicPlayer.play();
//  action 2:   the music player stops a song
musicPlayer.stop();
//  action 3:   the music player skips a song
musicPlayer.skip();

//  4)
//  Noun:       mobilePhone
//  action 1:   the mobile phone turns on
mobilePhone.on();
//  action 2:   the mobile phone turns off
mobilePhone.off();
//  action 3:   the mobile phone opens messages app
mobilePhone.openMessages();

//  5)
//  Noun:       logicPro
//  action 1:   logic pro creates a new session
logicPro.newSession();
//  action 2:   logic pro "saves as"
logicPro.saveAs();
//  action 3:   logic pro closes project
logicPro.closeProject();

//  6)
//  Noun:       hero
//  action 1:   hero equips armor
hero.equipArmor();
//  action 2:   hero equips weapon
hero.equipWeapon();
//  action 3:   hero sells item
hero.sellItem();

//  7)
//  Noun:       mario
//  action 1:   mario jumps
mario.jump();
//  action 2:   mario runs
mario.run();
//  action 3:   mario crouches
mario.crouch();

//  8)
//  Noun:       car
//  action 1:   the car accelerates
car.accelerate();
//  action 2:   the car uses breaks
car.breaks();
//  action 3:   the car starts the engine
car.startEngine();

//  9)
//  Noun:       volumeSlider
//  action 1:   the volume slider increases volume
volumeSlider.increaseVolume();
//  action 2:   the volume slider decreases volume
volumeSlider.decreaseVolume();
//  action 3:   the volume slider mutes
volumeSlider.mute();

//  10)
//  Noun:       bluetoothHeadphones
//  action 1:   bluetooth headphones turns on
bluetoothHeadphones.turnOn();
//  action 2:   bluetooth headphones pairs to device
bluetoothHeadphones.pairToDevice();
//  action 3:   bluetooth headphones turns off
bluetoothHeadphones.turnOff();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
