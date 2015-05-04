#include "Robot.h"
#include "Maze.h"
#include <iostream>
using namespace std;

int main()
{
   Robot bob;
   char direction;
    cin >> direction;
    switch(direction)
    {
        case 'H':
            bob.moveUp();
    }
    bob.mazeGrid.displayMaze();
    return 0;
}
