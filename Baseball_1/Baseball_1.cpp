// Baseball_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
#include <iomanip>
#include <fstream>
#include "Player.h"

const int NumOfPlayers = 15;

int outTotal, walkTotal, hitTotal;
float batAverage;
string tempName;

void prettyPrint(Player pArray[]) {

    for (int i = 0; i < NumOfPlayers; i++) {

        pArray[i].printPlayer();

    }

}

int main()
{
    Player Team[NumOfPlayers];

    ifstream inputFile;
    if (inputFile) {
        inputFile.open("Players.txt");
    }
    else {
        cout << "error: not a file";
    }

    for (int i = 0; i < NumOfPlayers; i++) {
        inputFile >> tempName >> hitTotal >> walkTotal >> outTotal;

        Team[i].setName(tempName);
        Team[i].setHitTotal(hitTotal);
        Team[i].setWalkTotal(walkTotal);
        Team[i].setAtBatTotal(outTotal);
        (Team[i].setBattingAvg(Team[i].calcAvg(hitTotal, outTotal + hitTotal)));

    }

    inputFile.close();

    cout << "*****************************************************" << endl << "\t\tAmarillo Sod Poodles\t\t" << endl << "*****************************************************" << endl;
    cout << setw(11) << "H" << setw(2) << "W" << setw(2) << "O" << " Bat Avg" << endl;

    prettyPrint(Team);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
