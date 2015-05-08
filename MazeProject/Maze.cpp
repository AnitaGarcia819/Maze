#include <iostream>
#include "Maze.h"
#include "Robot.h"

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

void Maze::generateNewLevel(int level)
 {
    if(level == 1)
    {
        for(int x = 0; x < ROW; x++)
        {
            for(int y = 0; y < COL; y++)
            {
                if((y == 2 && x == 0) || (y == 3 && x == 0) || (y == 4 && x == 0) || (y == 5 && x == 0) || (y == 6 && x == 0) || (y == 7 && x == 0) ||  (y == 8 && x == 0)|| (y == 9 && x == 0) ||
                (y == 10 && x == 0) || (y == 11 && x == 0) || (y == 12 && x == 0) || (y == 13 && x == 0) || (y == 14 && x == 0) || (y == 15 && x == 0) ||  (y == 16 && x == 0)|| (y == 17 && x == 0) ||
                (y == 18 && x == 0) || (y == 19 && x == 0) || (y == 20 && x == 0) || (y == 21 && x == 0) || (y == 22 && x == 0) || (y == 23 && x == 0) ||  (y == 24 && x == 0)) // first row wall
                    maze[x][y] = '*';
                if((y == 0 && x == 1) || (y == 0 && x == 2) || (y == 0 && x == 3) || (y == 0 && x == 4) || (y == 0 && x == 5) || (y == 0 && x == 6) || (y == 0 && x == 7) ||  (y == 0 && x == 8)|| (y == 0 && x == 9)) //left column wall
                    maze[x][y] = '*';
                if((y == 0 && x == 9) || (y == 1 && x == 9) || (y == 2 && x == 9) || (y == 3 && x == 9) || (y == 4 && x == 9) || (y == 5 && x == 9) ||  (y == 6 && x == 9)|| (y == 7 && x == 9)|| (y == 8 && x == 9)) //bottom row wall
                    maze[x][y] = '*';
                if((y == 9 && x == 1) || (y == 9 && x == 2) || (y == 9 && x == 3) || (y == 9 && x == 4) || (y == 9 && x == 5) || (y == 9 && x == 6) || (y == 9 && x == 7) ||  (y == 9 && x == 8)) // right column wall
                    maze[x][y] = '*';
                if((x == 2 && y == 1) || (x == 2 && y == 2))
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
    cout << "======= Level " << Robot::currentLevel << " =======" << endl;
    for(int row = 0; row < ROW; row++)
    {
        for(int col = 0; col < COL; col++)
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
