#include "Robot.h"
#include <iostream>
using namespace std;

int main()
{
   Robot bob;

    bob.mazeGrid.displayMaze();
    bob.mazeGrid.generateLevel(1);
    //bob.mazeGrid.displayMaze();

    //bob.mazeGrid.displayMaze();
    //bob.moveUp();
    //bob.mazeGrid.displayMaze();


    return 0;
}
