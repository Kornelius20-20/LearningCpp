#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    int i = 0;
    bool isDown = false; // initialize state machine to false

    while (true) {

            

        // if button has been pressed down then add a mark and print out current score
        if (isDown) {
            i += 1;
            cout << i << endl;
            Sleep(250); // Sleep to prevent multiple runs through the code for the same press
            isDown = false; // flip state back to default (unpressed)
        }

        // If numpad 0 key is pressed then set state machine to true
        if (GetKeyState(0x5A) & 0x8000) {
            isDown = true;
        }
        // if numpad decimal key is pressed, reset the tally
        if (GetKeyState(0x58) & 0x8000) {
            i = 0;
        }
    }    
}
