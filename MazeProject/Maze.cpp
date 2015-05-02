#include <iostream>
#include "Robot.h"
#include "Maze.h"

Maze::Maze()
 {
     //currentLevel = 1;
    wall = '*';/*
    for(int row = 0; row < ROW; row++)
    {
        for(int col = 0; col < COL; col++)
        {
            maze[row][col] = '_';

        }
        cout << endl;
    }
    cout << endl;*/
    generateMaze(1);
 }

void Maze::generateMaze(int current_level)
 {
    if(current_level == 1)
    {
        for(int x = 0; x < 10; x++)
        {
            for(int y = 0; y < 10; y++)
            {
               if(!((x == 0 && y == 0 ) && (x == 9 && y == 9)))

                    maze[x][y] == wall;
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
