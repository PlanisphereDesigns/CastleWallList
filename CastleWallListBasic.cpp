// LCastleWallList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<list>
#include<algorithm>

using namespace std;

void checkCastleWallList(string& userInput, list<string>& castleWallList) {
    if (userInput == "t") {
        castleWallList.push_back("tower");
    }
    else if (userInput == "w") {
        castleWallList.push_back("wall");
    }
    else if (userInput == "rw") {
        castleWallList.push_back("ruined wall");
    }
    else if (userInput == "tt") {
        castleWallList.push_back("tall tower");
    }
    else if (userInput == "g") {
        castleWallList.push_back("gate");
    }
    else if (userInput == "m") {
        castleWallList.push_back("moat bridge");
    }
    else if (userInput == "st") {
        castleWallList.push_back("short tower");
    }
}

void printCastleWall(list<string>& castleWallList){
    for (list<string>::iterator i = castleWallList.begin(); i != castleWallList.end(); i++) {
        cout << *i << " - ";
    }
    cout << endl;
}


int main()
{
    cout << "Hello World!\n";
    list<string> castleWallList;

    cout << "Please add a turret (t), wall (w), ruined wall (rw), tall tower (tt), short tower (st), gate (g), moat bridge (m)." << endl;
    cout << "Press d for done." << endl;

    string userInput = "";
    bool checkMore = true;

    while (userInput != "d") {
        if (int(castleWallList.size()) == 0) {
            cout << "The castle wall is currently empty. Add sections to build." << endl;
        }
        else {
            cout << "The castle wall currently looks like this: " << endl;
            printCastleWall(castleWallList);
            cout << endl;
        }
        cout << "Enter what part of the castle wall you want to build: ";
        cin >> userInput;
        /*Trim the white spaces off.*/
            /*The input is bad.  Ask for new input.*/
            if (userInput != "t" && userInput != "w" && userInput != "rw" && userInput != "tt" && userInput != "st"
                && userInput != "g" && userInput != "m") {
                cout << "You did not select one of the choices.  Please try again." << endl;
                continue;
            }
            else {
                cout << "Good input!  Your wall section has been added." << endl;
                checkCastleWallList(userInput, castleWallList);
            }
           // cout << "You did not select one of the choices.  Please try again." << endl;
 
        /*while loop conditions satisfied. Can now push back input. */

    }
    //out of the while loop
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "All done!  Here's your castle wall: " << endl;
    printCastleWall(castleWallList);

    bool siege = false;
    cout << "Siege the castle? (y/n): ";
    userInput = "b";
    while (!(userInput == "y" || userInput == "n")) {
        cin >> userInput;
        if (userInput == "y") {
            siege = true;
            cout << "Prepare to demolish!" << endl;
            break;
        }
        if (userInput == "n") {
            siege = false;
            cout << "The walls can stand!" << endl;
            break;
        }
        else {
            cout << "Invalid input.  Please enter again: ";
            continue;
        }
    }

}
