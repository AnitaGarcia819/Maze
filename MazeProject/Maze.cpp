#include <iostream>
#include "Maze.h"
#include "Robot.h"

Maze::Maze()
 {
     //currentLevel = 1;
    defaultIcon = ' ';
    wall = '#';

    for(int x = 0; x < Maze::ROW; x++)
    {
        for(int y = 0; y < Maze::COL; y++)
        {
            maze[x][y] = defaultIcon;
        }
    }

}
void Maze::generateNewLevel(int level)
 {
    if(level == 1)
    {

        for(int x = 0; x < Maze::ROW; x++)
        {
            for(int y = 0; y < Maze::COL; y++)

            {
                if((y == 2 && x == 0) || (y == 3 && x == 0) || (y == 4 && x == 0) || (y == 5 && x == 0) || (y == 6 && x == 0) || (y == 7 && x == 0) ||  (y == 8 && x == 0)|| (y == 9 && x == 0) ||
                (y == 10 && x == 0) || (y == 11 && x == 0) || (y == 12 && x == 0) || (y == 13 && x == 0) || (y == 14 && x == 0) || (y == 15 && x == 0) ||  (y == 16 && x == 0)|| (y == 17 && x == 0) ||
                (y == 18 && x == 0) || (y == 19 && x == 0) || (y == 20 && x == 0) || (y == 21 && x == 0) || (y == 22 && x == 0) || (y == 23 && x == 0) ||  (y == 24 && x == 0)) // first row wall
                    maze[x][y] = wall;
                if((y == 0 && x == 1) || (y == 0 && x == 2) || (y == 0 && x == 3) || (y == 0 && x == 4) || (y == 0 && x == 5) || (y == 0 && x == 6) || (y == 0 && x == 7) ||  (y == 0 && x == 8)|| (y == 0 && x == 9) ||
                (y == 0 && x == 10) || (y == 0 && x ==11) || (y == 0 && x == 12) || (y == 0 && x == 13) || (y == 0 && x == 14) || (y == 0 && x == 15) || (y == 0 && x == 16) ||  (y == 0 && x == 17)|| (y == 0 && x == 18) ||
                (y == 0 && x == 19) || (y == 0 && x == 20) || (y == 0 && x == 21) || (y == 0 && x == 22) || (y == 0 && x == 23) || (y == 0 && x == 24)) //left column wall
                    maze[x][y] = wall;
                if((y == 0 && x == 24) || (y == 1 && x == 24) || (y == 2 && x == 24) || (y == 3 && x == 24) || (y == 4 && x == 24) || (y == 5 && x == 24) ||  (y == 6 && x == 24)|| (y == 7 && x == 24)|| (y == 8 && x == 24)||
                (y == 9 && x == 24) || (y == 10 && x == 24) || (y == 11 && x == 24) || (y == 12 && x == 24) || (y == 13 && x == 24) || (y == 14 && x == 24) ||  (y == 15 && x == 24)|| (y == 16 && x == 24)|| (y == 17 && x == 24) ||
                (y == 18 && x == 24) || (y == 19 && x == 24) || (y == 20 && x == 24) || (y == 21 && x == 24) || (y == 22 && x == 24)) //bottom row wall
                    maze[x][y] = wall;
                if((y == 24 && x == 1) || (y == 24 && x == 2) || (y == 24 && x == 3) || (y == 24 && x == 4) || (y == 24 && x == 5) || (y == 24 && x == 6) || (y == 24 && x == 7) ||  (y == 24 && x == 8) ||
                (y == 24 && x == 9) || (y == 24 && x == 10) || (y == 24 && x == 11) || (y == 24 && x == 12) || (y == 24 && x == 13) || (y == 24 && x == 14) || (y == 24 && x == 15) ||  (y == 24 && x == 16) ||
                (y == 24 && x == 17) || (y == 24&& x == 18) || (y == 24 && x == 19) || (y == 24 && x == 20) || (y == 24 && x == 21) || (y == 24 && x == 22) || (y == 24 && x == 23)) // right column wall
                    maze[x][y] = wall;
                if(x == 1 && y == 17) // row 1
                    maze[x][y] = wall;
                if(( y == 1 || y == 2 || y == 3 || y == 4 || y == 5 || y == 7 || y == 8 || y == 9 || y == 10 || y == 11 || y == 12 || y == 13 || y == 14 || y == 15 || y == 17 || y == 20 || y == 21 || y == 23 || y == 24) && (x == 2)) // row 2
                    maze[x][y] = wall;
                if((y == 2 || y == 7 || y == 9 || y == 11 || y == 13 || y == 17) && (x == 3)) // row 3
                    maze[x][y] = wall;
                if((y == 2 || y == 3|| y == 4 || y == 5 || y == 7 || y == 9 || y == 11 || y == 13 || y == 14 || y == 15 || y == 16 || y == 17 || y == 19 || y == 20 || y == 21 || y == 22 || y == 23) && (x == 4)) // row 4
                    maze[x][y] = wall;
                if((y == 2 || y == 5 || y == 9 || y == 11 || y == 13) && (x == 5)) // row 5
                    maze[x][y] = wall;
                if((y == 2 || y == 5 || y == 7 || y == 8 || y == 9 || y == 11 || y == 13 || y == 15 || y == 16 || y == 17 || y == 18 || y == 19 || y == 20 || y == 21 || y == 22 || y == 23) && (x == 6))
                    maze[x][y] = wall; // row 6
                if((y == 2 || y == 5 || y == 7 || y == 8 || y == 9 || y == 11 || y == 13 || y == 15 || y == 16 || y == 17 || y == 23) && (x == 7))
                    maze[x][y] = wall; // row 7
                if((y == 2 || y == 5 || y == 7 || y == 8 || y == 9 || y == 11 || y == 13 || y == 17 || y == 19 || y == 21) && (x == 8))
                    maze[x][y] = wall; // row 8
                if((y == 2 || y == 5 || y == 7 || y == 9 || y == 11 || y == 13 || y == 14 || y == 15 || y == 17 || y == 19 || y == 20 || y == 21 || y == 23) && (x == 9))
                    maze[x][y] = wall; // row 9
                if((y == 1 || y == 2 || y == 5 || y == 7 || y == 9 || y == 11 || y == 15 || y == 17 || y == 230) && (x == 10))
                    maze[x][y] = wall; // row 10
                if((y == 5 || y == 7 || y == 9 || y == 11 || y == 12 || y == 13 || y == 15 || y == 17 || y == 19 || y == 20 || y == 21 || y == 23) && (x == 11))
                    maze[x][y] = wall; // row 11
                if((y == 2 || y == 5 || y == 7 || y == 9 || y == 10 || y == 11 || y == 13 || y == 15) && (x == 12))
                    maze[x][y] = wall; // row 12
                if((y == 2 || y == 5 || y == 7 || y == 8 || y == 9 || y == 11 || y == 13 || y == 14 || y == 15 || y == 16 || y == 17 || y == 18 || y == 19 || y == 20) && (x == 13))
                    maze[x][y] = wall; // row 13
                if((y == 2 || y == 5 || y == 20) && (x == 14))
                    maze[x][y] = wall; // row 14
                if((y == 2 || y == 3 || y == 5 || y == 7 || y == 8 || y == 9 || y == 10 || y == 11 || y == 12 || y == 13 || y == 14 || y == 15 || y == 17 || y == 18 || y == 20) && (x == 15))
                    maze[x][y] = wall; // row 15
                if((y == 2 || y == 9 || y == 15 || y == 16 || y == 17 || y == 20) && (x == 16))
                    maze[x][y] = wall; // row 16
                if((y == 2 || y == 5 || y == 6 || y == 9 || y == 17 || y == 20 || y == 21 || y == 22 || y == 23) && (x == 17))
                    maze[x][y] = wall; // row 17
                if((y == 2 || y == 5 || y == 6 || y == 9 || y == 10 || y == 11 || y == 12 || y == 13 || y == 14 || y == 15 || y == 16 || y == 17 || y == 18 || y == 20) && (x == 18))
                    maze[x][y] = wall; // row 18
                if((y == 2 || y == 5 || y == 6 || y == 7 || y == 8 || y == 9 ||  y == 18 || y == 20 || y == 22 || y == 23) && (x == 19))
                    maze[x][y] = wall;

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

    for(int row = 0; row < Maze::ROW; row++)
    {
        for(int col = 0; col < Maze::COL; col++)

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
