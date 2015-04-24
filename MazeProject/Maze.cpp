#include <iostream>
#include "Robot.h"
#include "Maze.h"
int Maze::currentLevel = 1;
Maze::Maze()
 {
     //currentLevel = 1;
    wall = '*';
    for(int row = 0; row < ROW; row++)
    {
        for(int col = 0; col < COL; col++)
        {
            maze[row][col] = '_';

        }
        cout << endl;
    }
    cout << endl;
 }
/*
void Maze::generateMaze(int current_level)
 {
    if(current_level == 1)
        for(int x = 1; x < 49; x++)
        {
            for(int y = 1; y < 49; y++)
            {
               if(y == 1)
                maze[x][y] == wall;
            }
        }

        //generate a maze
   else if(current_level == 2)
        //generate a maze
    else
        //generate a maze

 }*/
char Maze::getWall(int x, int y)
{
    if(maze[x][y] == isWall(x, y))
     return wall;
}

void Maze::setWall(char c)
{
    wall = c;
}
bool Maze::isWall(int x, int y)
{
    if(maze[x][y] == wall)
        return true;

    return false;
}
void Maze::increaseCurrentLevel()
{
    if(Maze::currentLevel < 3)
        Maze::currentLevel++;
}
