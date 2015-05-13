#include "Robot.h"
#include "Maze.h"
#include <iostream>
using namespace std;

int main()
{
   Robot bob;

  char playAgain;
   do{
        bob.resetGame();
        bob.playGame();
        cout << "Would you like to play again? ";
        cin >> playAgain;

    }while(playAgain != 'n');

    return 0;
}
