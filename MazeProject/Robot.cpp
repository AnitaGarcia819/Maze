/*
*************************************************************
    filename:Robot.cpp
    Class Name: Robot
    Author: Araceli Gopar, Anita Garcia, Ana Perez
    Date: 4/18/2015
    Compiler: code blocks 13.12
    Description: Robots class will mimic a robot finding its way out of maze.
                 Objects of type robot will be able to choose the direction in where to more.
                 This class will use another class Maze and Levels.
**************************************************************
*/

#include "Robot.h"
#include "Maze.h"
#include <cassert>
#include <iostream>

using namespace std;
//int Robot::x_position = 0;
//int Robot::y_position = 0;

Robot::Robot()
{
   // Maze check_wall;
    x_position, y_position = 0;
    robot = 'x';
    mazeGrid[0][0].setWall(robot);
    //mazeGrid[50][50].generateMaze(Maze::currentLevel);
}

bool Robot::isFinished(int x_position, int y_position)
{
    return(x_position == 50 && y_position == 50 && Maze::currentLevel <= 3);

}
void Robot::moveLeft()
{
    assert(!(mazeGrid[x_position][y_position--].isWall(x_position, y_position--)));
    assert(y_position-- >= 0);
    y_position--;

}
void Robot::moveRight()
{
    assert(!(mazeGrid[x_position][y_position++].isWall(x_position, y_position++)));
    assert(y_position++ < 50);
    y_position++;
}
void Robot::moveUp()
{
    assert(!(mazeGrid[x_position--][y_position].isWall(x_position--, y_position)));
    assert(x_position-- >= 0);
    x_position--;
}
void Robot::moveDown()
{
    assert(!(mazeGrid[x_position++][y_position].isWall(x_position++, y_position)));
    assert(x_position++ < 50);
    x_position++;
}
void Robot::setRobot(char c)
{
    robot = c;
}
void Robot::displayMaze()
{
    for(int row = 0; row < 50; row++)
    {
        for(int col = 0; col < 50; col++)
        {
            // To do: display character at maze[row][col]
            mazeGrid[row][col].getChar(row, col);

        }
        cout << endl;
    }
    cout << endl;
}
