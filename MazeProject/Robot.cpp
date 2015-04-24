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

Robot::Robot()
{
   // Maze check_wall;
    //Maze maze_grid;
    x_position, y_position = 0;
    robot = 'x';
    //mazeGrid[0][0] = Maze(robot);
}
bool Robot::isFinished(int x_position, int y_position)
{
    return(x_position == 50 && y_position == 50)
}
void Robot::moveLeft()
{


}
void Robot::moveRight()
{

}
void Robot::moveUP()
{


}
void Robot::moveDown()
{

}
