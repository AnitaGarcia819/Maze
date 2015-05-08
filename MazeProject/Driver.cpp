#include "Robot.h"
#include "Maze.h"
#include <iostream>
using namespace std;

int main()
{
   Robot bob;
    bob.playGame();
    bob.mazeGrid.generateNewLevel(1);
    bob.mazeGrid.displayMaze();

    //cout << bob.mazeGrid.ROW;
    return 0;
}
