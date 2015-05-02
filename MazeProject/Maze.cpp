#include <iostream>
#include "Maze.h"
#include <iostream>

Maze::Maze()
 {
     //currentLevel = 1;
    defaultIcon = '_';
    wall = '*';
    for(int row = 0; row < ROW; row++)
    {
        for(int col = 0; col < COL; col++)
        {
            maze[row][col] = defaultIcon;

        }
        cout << endl;
    }
    cout << endl;
 }

void Maze::generateLevel(int level)
 {
    if(level == 1)
    {
        for(int x = 0; x < 10; x++)
        {
            for(int y = 0; y < 10; y++)
            {
               if(y == 1 && x != 9)
                    maze[x][y] = '*';
            }
        }
    }
        //generate a maze
  // else if(current_level == 2)
        //generate a maze
//    else
        //generate a maze

 }


void Maze::setWall(char c)
{
    wall = c;
}
void Maze::displayMaze()
{
    for(int row = 0; row < 10; row++)
    {
        for(int col = 0; col < 10; col++)
        {
            // To do: display character at maze[row][col]
            cout << maze[row][col];

        }
        cout << endl;
    }
    cout << endl;
}
bool Maze::isWall(int next_x, int next_y)
{
    if(maze[next_x][next_y] == wall)
        return true;

    return false;
}
void Maze::setDefaultIcon(char i)
{
    defaultIcon = i;
}
