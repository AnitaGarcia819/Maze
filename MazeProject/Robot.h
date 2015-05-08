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

#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED
#include "Maze.h"
#include <iostream>
using namespace std;
class Robot
{


void computeSum(int&, int, int);
// Summary: Compute the sum of two int parameters.
// Precondition: Two ints to be added together are passed by value into the function; one int is passed
// by reference to hold the sum.
// Postcondition: Sum of the two int values is computed and stored in the reference variable.
//
// ********************************************************
//
    private:
        char robot;

    public:

        //public variables
        static int currentLevel;
        Maze mazeGrid;
        int x_position, y_position;
        bool gameOver;

        Robot();
        //*********************************************************
        //Summary: Constructor, will initialize an object's variables.
        // and place the robot at th starting position.
        //condition:
        // Precondition:
        //*********************************************************


        void isLevelFinished(int x_position, int y_position);
        //*********************************************************
        //Summary: isFinish will return true or false whether the robot
        //         has completed the maze and is ready to more to the next level.
        //condition:
        // Precondition:
        //*********************************************************
        void moveLeft();
        //*********************************************************
        //Summary: moveLeft will move the robot to the left by decreasing
        //         y's coordinates.
        //condition:
        // Precondition:
        //*********************************************************
        void moveRight();
        //*********************************************************
        //Summary: moveRight will move the robot to the right by
        //         increasing y's coordinates.
        //condition:
        // Precondition:
        //*********************************************************
        void moveUp();
        //*********************************************************
        //Summary: moveUp will move the robot up by decreasing
        //         x's coordinates.
        //condition:
        // Precondition:
        //*********************************************************
        void moveDown();
        //*********************************************************
        //Summary: moveDown will move the robot down by increasing
        //         x's coordinates.
        //condition:
        // Precondition:
        //*********************************************************
        void setRobot(char c);
        void increaseCurrentLevel();
        int getCurrentLevel() const {return Robot::currentLevel;}
        void resetGame();
        void resetRobot();// Sets robot to 0,0 && default icon is set to 9,9
        void drawRobot(int next_x, int next_y); // Draws robot in the next_x & next_y  coordinates
        void replacePreviousRobot(int previous_x, int previous_y);
        void playGame();
       void isGameOver(int x_position, int y_position);
       void displayMenu();



};

#endif // ROBOT_H_INCLUDED
