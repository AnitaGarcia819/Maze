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

int Robot::currentLevel = 1;
Robot::Robot()
{
    x_position, y_position = 0;
    robot = 'x';
    mazeGrid.maze[0][0] = robot;
    mazeGrid.generateMaze(Robot::currentLevel);
}

bool Robot::isFinished(int x_position, int y_position)
{
    return(x_position == 10 && y_position == 10 && Robot::currentLevel <= 3);

}
void Robot::moveLeft()
{
   // assert(!(mazeGrid[x_position][y_position--].isWall(x_position, y_position--)));
    assert(y_position-- >= 0);
    y_position--;

}
void Robot::moveRight()
{
   // assert(!(mazeGrid[x_position][y_position++].isWall(x_position, y_position++)));
    assert(y_position++ < 50);
    y_position++;
}
void Robot::moveUp()
{
   // assert(!(mazeGrid[x_position--][y_position].isWall(x_position--, y_position)));
    assert(x_position-- >= 0);
    x_position--;
}
void Robot::moveDown()
{
   // assert(!(mazeGrid[x_position++][y_position].isWall(x_position++, y_position)));
    assert(x_position++ < 50);
    x_position++;
}
void Robot::setRobot(char c)
{
    robot = c;
}

void Robot::increaseCurrentLevel()
{
    if(Robot::currentLevel < 3)
        Robot::currentLevel++;
}
bool Robot::isWall(int next_x, int next_y)
{
    if(mazeGrid.maze[next_x][next_y] == mazeGrid.getWall())
        return true;

    return false;
}