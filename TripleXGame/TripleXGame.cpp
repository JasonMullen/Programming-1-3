/*
    Information: Unreal Engine C++: First game known as Triple X
    Name:Jason Mullen
    Date started:12-11-2020
    Date completed:12-13-2020
    Notes: 1.) If you're going to call a function inside another function(kind've like russian dolls)
    make sure the function that is being called is on top of the function that is calling it.
*/

//preprocessor directive 
#include <iostream> 
#include <iomanip> 
#include <ctime> //allows the programmer to gain access to the computers time.
using namespace std;
//Print introduction function
void PrintIntroduction(int Difficulty) {
    cout << "You're a secret agent breaking into level " << Difficulty << " of a secure server room...." << endl;
    cout << "Enter the correct code to continue....";
}
//Play game function

bool PlayGame(int Difficulty) {
    //Expression Statments
    PrintIntroduction(Difficulty);
    //Declaration statments
    const int CodeA = rand() % Difficulty + Difficulty; 
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Expression Statments
    // "\n" This is an escape sequence that works the same as endl.
    cout << endl;
    cout << "+There are 3 numbers in the code. \n";
    cout << "+The sum is:" << CodeSum << "\n";
    cout << "+The product is:" << CodeProduct << "\n";

    //Store Guess player
    int GuessA, GuessB, GuessC;
    cin >> GuessA >> GuessB >> GuessC;

    //Checks the accuracy of the user's guess.
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        cout << "Level completed!" << endl;
        cout << "============================================================================="<< endl;
        return true;
    }
    else {
        cout << "Level failed, try again! " << endl;
        cout << "=============================================================================" << endl;
        return false;
    }

    //return statment
}

//main function 
int main() 
{
    srand(time(NULL)); //creates new random sequence based on time of day.
    int LevelDifficulty = 1;
    int MaxDifficulty = 10;
    while (LevelDifficulty <= MaxDifficulty) {//The loop will continue until the max level is completed.
        bool bLevelComplete = PlayGame(LevelDifficulty);//using parameters which passes the incremental number into other functions that have also declared the parameter.
        cin.clear(); //clears any errors
        cin.ignore(); //Discards the buffer

        if (bLevelComplete){
            //Increase the level difficulty.
            ++LevelDifficulty; //takes the value of level difficulty and increases it by 1.
        }
    }
    cout << endl;
    cout << "Good job mate, you've beat the game.";
    cout << endl;
    return 0;
}



