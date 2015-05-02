#include "Robot.h"
using namespace std;

int main()
{
   Robot bob;

    bob.mazeGrid.displayMaze();
    bob.mazeGrid.generateMaze(1);
    bob.mazeGrid.displayMaze();
    return 0;
}
