//Little Escape Room RPG :]
#include <iostream>
using namespace std;

int main(){

//Variables
char startButton = 'n';
char proceed = 'n';
char move = 'n';
char inter = 'n';
int speak = 0;
int speak2 = 0;
int playerHP = 100;
int enemy1HP = 30;
bool hook = false;
bool torch = false;
bool keys = false;
bool guardLeft = false;
bool room1 = false;
bool room2 = false;
bool stopSpammingText1 = false;
bool stopSpammingText2 = false;
bool stopSpammingText3 = false;
bool stopSpammingText4 = false;


//Start Game
cout << "Welcome to the game! Press B to start!" << endl;
cin >> startButton;
if ((startButton == 'b')||(startButton == 'B')){
    room1 = true;
}

//Room 1 (Interaction Tutorail)
while(room1 == true){

//Spawn in
if (move == 'n'){
    cout << "You awaken in a small, dimly-lit room." << endl; 
    cout << "You can hardly see, but through the dingy torchlight, you can make out the square shape of the room." << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Use WASD to look aroud (W-UP  S-BACK  A-LEFT  D-RIGHT)" << endl;
    cin >> move;
};

//Return to spawn
if (move == 'c') {
    cout << "You return to the center of the room." << endl;
    cout << "----------------------------------------------" << endl;
    cout << "(W-UP / S-BACK / A-LEFT / D- RIGHT" << endl;
    cin >> move;
};

//Front Area
if((move == 'w')||(move == 'W')) {

    //You cannot get the key :(
    if (hook == false){

    //Tutorial Texts
    if (stopSpammingText1 == false){
        cout << "In front of you lies a door of iron bars. It is firmly locked." << endl; 
        cout << "You can see a guard on the other side. A set of keys dangle from his belt." << endl; 
        cout << "----------------------------------------------" << endl;
        cout << "Use E,R,T to interact with surroundings. (R-Attempt to take guards keys / T-Speak to guard / S-BACK)" << endl; 
        cin >> inter;
        }
   
    //Goodbye Spam
    if (stopSpammingText1 == true){
        cout << "The iron door and the guard remain in front of you." << endl; 
        cout << "----------------------------------------------" << endl;
        cout << "(R-Attempt to take guards keys / T-Speak to guard / S-BACK)" << endl; 
        cin >> inter;
    }
        
        if ((inter == 's')||(inter== 'S')){ //Return
            move = 'c';
            inter = 'n';
            stopSpammingText1 = true;
            } else if ((inter == 'r')||(inter== 'R')){ //Attempt to steal (you will fail)
            cout << "*I can't reach his belt from here without being noticed*" << endl;
            inter = 'n';
            stopSpammingText1 = true;
            } else if ((inter == 't')||(inter== 'T')) { //Speak to the very rude guard
            cout << "*Excuse me?*" << endl;
            cout << "Guard:  What do you want?" << endl;
            cout << "(1-*Where am I?* / 2-*Could you let me out?*" << endl;
            stopSpammingText1 = true;
            cin >> speak;
            if (speak == 1){ //Dialogue 1
                cout << "Guard:  None of your damn business." << endl;
                inter = 'n';
                speak = 0;
                } else if (speak == 2){ //Dialogue 2
                cout << "Guard:  Ha! Idiot." << endl;
                inter = 'n';
                speak = 0;
                }
                
            }
    }

    //You can get the key :D
    if ((hook == true) && (keys == false)){

    //Tutorial Texts
    if (stopSpammingText1 == false){
        cout << "In front of you lies a door of iron bars. It is firmly locked." << endl; 
        cout << "You can see a guard on the other side. A set of keys dangle from his belt." << endl; 
        cout << "----------------------------------------------" << endl;
        cout << "Use E,R,T to interact with surroundings. (E-Use Hook on keys / T-Speak to guard / S-BACK)" << endl; 
        cin >> inter;
        }
   
    //Goodbye Spam
    if (stopSpammingText1 == true){
        cout << "The iron door and the guard remain in front of you." << endl; 
        cout << "----------------------------------------------" << endl;
        cout << "(E-Use Hook on keys / T-Speak to guard / S-BACK)" << endl; 
        cin >> inter;
    }

        if ((inter == 's')||(inter== 'S')){ //Return
            move = 'c';
            inter = 'n';
            stopSpammingText1 = true;
            } else if ((inter == 'e')||(inter== 'E')){ //Use hook on keys
            cout << "You quietly thread your tool through the bars and hook the set of keys on the end." << endl;
            cout << "You very carefully pull the keys back into the cell and slip them into your pocket." << endl;
            cout << "!KEYS have been added to your items!" << endl;
            keys = true;
            inter = 'n';
            stopSpammingText1 = true;
            } else if ((inter == 't')||(inter== 'T')) { //Speak to the very rude guard
            cout << "*Excuse me?*" << endl;
            cout << "Guard:  What do you want?" << endl;
            cout << "(1-*Where am I?* / 2-*Could you let me out?*" << endl;
            stopSpammingText1 = true;
            cin >> speak;
            if (speak == 1){ //Dialogue 1
                cout << "Guard:  None of your damn business." << endl;
                inter = 'n';
                speak = 0;
                } else if (speak == 2){ //Dialogue 2
                cout << "Guard:  Ha! Idiot." << endl;
                inter = 'n';
                speak = 0;
                }
                
            }
    }
    
    //Get rid of the guard
    if ((keys == true) &&  (guardLeft == false)){
        cout << "*Now's my chance to distract the guard and get out of here!*" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "(E-Use keys on cell door / T-Speak to guard / S-BACK)" << endl; 
        cin >> inter;

        if ((inter == 's')||(inter== 'S')){ //Return
            move = 'c';
            inter = 'n';
            } else if ((inter == 'e')||(inter== 'E')){ //Attempt to leave (you are dumb)
            cout << "*I can't just walk out while the guard is watching!*" << endl;
            inter = 'n';
            } else if ((inter == 't')||(inter== 'T')) { //Speak to the very rude guard
            cout << "*Excuse me?*" << endl;
            cout << "Guard:  What do you want?" << endl;
            cout << "(1-*Where am I?* / 2-*Could you let me out?* / 3-*There is a dead body in here.*" << endl;
            cin >> speak;
            if (speak == 1){ //Dialogue 1
                cout << "Guard:  None of your damn business." << endl;
                inter = 'n';
                speak = 0;
                } else if (speak == 2){ //Dialogue 2
                cout << "Guard:  Ha! Idiot." << endl;
                inter = 'n';
                speak = 0;
                } else if (speak == 3){ //Dialogue 3
                    cout << "Guard: What? What do you want me to do about it!?" << endl;
                    cout << "(1-*Would you please clean it up?* / 2-*I am going to eat it.*)" << endl;
                    cin >> speak2;
                    if (speak2 == 1){ //Dialogue 4
                        cout << "Guard: Hmph. fine" << endl;
                        cout << "The guard cleans the mess in your cell and walks away to dispose of it." << endl;
                        guardLeft = true;
                        inter = 'n';
                        speak = 0;
                        speak2 = 0;
                    } else if (speak2 == 2){ //Dialogue 5
                        cout << "Guard: What is wrong with you. What is wrong with you. What is wrong with you. What is wrong with you. What is wrong wi-" << endl;
                        cout << "The guard hastily cleans the mess in your cell, making sure you don't get the chance to consume it, and then walks away to dispose of it." << endl;
                        guardLeft = true;
                        inter = 'n';
                        speak = 0;
                        speak2 = 0;
                    }
                
                }   
            }
}
    
    //Get outta there!
     if ((keys == true) &&  (guardLeft == true)){
        cout << "*The guard is gone, I can leave now!*" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "(E-Use keys on cell door / S-BACK)" << endl; 
        cin >> inter;

         if ((inter == 's')||(inter== 'S')){ //Return
            move = 'c';
            inter = 'n';
            } else if ((inter == 'e')||(inter== 'E')){ //Leave Cell
            cout << "You use the keys to unlock the door, and step out into the corridor." << endl;
            cout << "(Press B to proceed)" << endl;
            inter = 'n';
            cin >> proceed;
            if ((proceed == 'b')||(proceed == 'B')){
                room1 = false;
                room2 = true;
            }
            }
     }

};

//Left Area
if((move == 'a')||(move == 'A')) {
    
    //Oh a dead body.
    if(guardLeft == true){
        cout << "The guard didn't clean too well, but at least the corpse is no longer here." << endl; 
        cout << "(D-RIGHT)" << endl; 
        cin >> inter;
    } else{

    if (stopSpammingText2 == false){
        cout << "To your left is a uh. oh." << endl; 
        cout << "There's a dead body here." << endl; 
        cout << "It doesn't seem particularly useful...albeit a bit dreary." << endl; 
        cout << "----------------------------------------------" << endl;
        cout << "(D-RIGHT)" << endl; 
        cin >> inter;
    }
    
    //It's still here. Yeah. Sorry.
    if (stopSpammingText2 == true){
        cout << "Yeah...No yeah, there's still very much a human corpse here." << endl; 
        cout << "Can't blame you for double checking though." << endl; 
        cout << "----------------------------------------------" << endl;
        cout << "(D-RIGHT)" << endl; 
        cin >> inter;
    }
    }
    if ((inter == 'd')||(inter== 'D')){ //Return
        move = 'c';
        inter = 'n';
        stopSpammingText2 = true;
        }
}

//Back Area
if((move == 's')||(move == 'S')) {

    //Nothing left to do here
    if (torch == true){
        cout << "The wall behind you is now empty." << endl; 
        cout << "(W-UP" << endl;
        cin >> inter;
        if ((inter == 'w')||(inter== 'W')){ //Return
            move = 'c';
            inter = 'n';
            }
    }
    
    //Grab the torch
    if (torch == false){
        
        if (stopSpammingText4 == false){
            cout << "Behind you, a stone wall is illuminated by the single torch in the room." << endl; 
            cout << "You could probably grab it." << endl; 
            cout << "----------------------------------------------" << endl;
            cout << "Use E,R,T to interact with surroundings. (R-Attempt to take the torch / W-UP)" << endl; 
            cin >> inter;
        }

        if (stopSpammingText4 == true){
            cout << "You could probably grab the torch behind you." << endl; 
            cout << "----------------------------------------------" << endl;
            cout << "(R-Attempt to take the torch / W-UP)" << endl; 
            cin >> inter;
        }

        if ((inter == 'w')||(inter== 'W')){ //Why would you leave without the torch why god why
            move = 'c';
            inter = 'n';
            stopSpammingText4 = true;
            } else if ((inter == 'r')||(inter== 'R')) { //You did it (I am so proud of you)
            cout << "You pry the torch of the wall." << endl; 
            cout << "!Torch has been added to your items!" << endl;
            torch = true;
            inter = 'n';
            stopSpammingText4 = true;
            }
}
}

//Right Area
if((move == 'd')||(move == 'D')) {

    //Nothing left here
    if (hook == true){
    cout << "There is nothing left on the floor." << endl; 
        cout << "(A-LEFT)" << endl;
        cin >> inter;
    if ((inter == 'a')||(inter== 'A')){ //Return
        move = 'c';
        inter = 'n';
        }
}
    
    //Grab the hook
    if (hook == false){
    
    //You have the torch
    if (torch == true){
        
        //Tutorial Text
        if (stopSpammingText3 == false){
            cout << "To your right, a discarded metal bar lay on the ground." << endl; 
            cout << "You could use this for reach, but there is no hook on the end..." << endl; 
            cout << "----------------------------------------------" << endl;
            cout << "Use E,R,T to interact with surroundings. (E-Use torch on metal rod / R-Pick up and examine metal rod / A-LEFT)" << endl; 
            cin >> inter;
        }
        //Goodbye Spam
        if (stopSpammingText3 == true){
            cout << "The bar to your right won't be any use without a hook on the end..." << endl; 
            cout << "----------------------------------------------" << endl;
            cout << "(E-Use torch on metal rod / R-Pick up and examine metal rod / A-LEFT)" << endl; 
            cin >> inter;
        }

        if ((inter == 'a')||(inter== 'A')){ //Return
            move = 'c';
            inter = 'n';
            stopSpammingText3 = true;
            } else if ((inter == 'r')||(inter== 'R')){ //Look at rod (that's what she said)
            cout << "The rod is quite sturdy, but under the right conditions, it could be maliable..." << endl;
            cout << "You set the rod back down." << endl;
            inter = 'n';
            stopSpammingText3 = true;
            } else if ((inter == 'e')||(inter== 'E')){ //Form a Hook
            cout << "You pick up the rod and hold it over the torch until it is heated to a glow." << endl;
            cout << "You then press the now maliable rod into the wall, forming a crude hook shape on the end." << endl;
            cout << "!HOOK has been added to your items!" << endl;
            hook = true;
            inter = 'n';
            stopSpammingText3 = true;
            }
    }
    
    //You have NO torch
    if (torch == false){
        if (stopSpammingText3 == false){
            cout << "To your right, a discarded metal bar lay on the ground." << endl; 
            cout << "You could use this for reach, but there is no hook on the end..." << endl; 
            cout << "----------------------------------------------" << endl;
            cout << "Use E,R,T to interact with surroundings. (R-Pick up and examine metal rod / A-LEFT)" << endl; 
            cin >> inter;
        }
        if (stopSpammingText3 == true){
            cout << "The bar to your right won't be any use without a hook on the end..." << endl; 
            cout << "----------------------------------------------" << endl;
            cout << "(R-Pick up and examine metal rod / A-LEFT)" << endl; 
            cin >> inter;
        }

        if ((inter == 'a')||(inter== 'A')){ //Return
            move = 'c';
            inter = 'n';
            stopSpammingText3 = true;
            } else if ((inter == 'r')||(inter== 'R')){ //Look at rod (that's what she said)
            cout << "The rod is quite sturdy, but under the right conditions, it could be maliable..." << endl;
            cout << "You set the rod back down." << endl;
            inter = 'n';
            stopSpammingText3 = true;
            }
    }
}

}

};

//Escape
if (room2 == true){
    cout << "You enter the corridor and look around for a way out." << endl;
    cout << "You see an exit door in the distance." << endl;
    cout << "You sprint down the empty hallway to the exit." << endl;
    cout << "Freedom is yours!" << endl;
}

return 0;

}
