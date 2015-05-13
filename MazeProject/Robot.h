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
    private:
        char robot;

    public:
        Maze mazeGrid;
        static int currentLevel;
        int x_position,
            y_position;
        bool gameOver;

        //*********************************************************
        Robot();
        // Summary: Constructor, will initialize an object's variables.
        // and place the robot at th starting position.
        // Precondition:
        // Postcondition:
        //*********************************************************

        // Accessors

        //*********************************************************
        char getRobot() const {return robot;}
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        int getCurrentLevel() const {return Robot::currentLevel;}
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        int getXPosition() const {return x_position;}
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        int getYPosition() const {return y_position;}
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        bool getGameOver() const {return gameOver;}
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        // Mutators

        //*********************************************************
        void setRobot(char c);
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void setCurrentLevel(int current_level);
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void setXposition(int x);
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void setYposition(int y);
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void setIsGameOver(bool game);
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************


        // Member Methods

        //*********************************************************
        void displayMenu();
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void playGame();
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void moveUp();
        //Summary: moveUp will move the robot up by decreasing
        // x's coordinates.
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void moveDown();
        //Summary: moveDown will move the robot down by increasing
        // x's coordinates.
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void moveLeft();
        // Summary: moveLeft will move the robot to the left by decreasing
        // y's coordinates.
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void moveRight();
        //*********************************************************
        //Summary: moveRight will move the robot to the right by
        // increasing y's coordinates.
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void drawRobot(int next_x, int next_y); // Draws robot in the next_x & next_y  coordinates
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void replacePreviousRobot(int previous_x, int previous_y);
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void resetRobot();// Sets robot to 0,0 && default icon is set to 9,9
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************


        //*********************************************************
        void increaseCurrentLevel();
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        void isLevelFinished(int x_position, int y_position);
        //*********************************************************
        // Summary: isFinish will return true or false whether the robot
        // has completed the maze and is ready to more to the next level.
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void isGameOver(int x_position, int y_position);
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void resetGame();
        // Summary:
        // Precondition:
        // Postcondition:
        //*********************************************************

};

#endif // ROBOT_H_INCLUDED
