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
        // Precondition: --
        // Postcondition: Member variables will be set to default values
        //*********************************************************

        // Accessors

        //*********************************************************
        char getRobot() const {return robot;}
        // Summary: Accesses the robot character
        // Precondition: The member variable, 'robot' should be set
        // Postcondition: Returns robot
        //*********************************************************

        //*********************************************************
        int getCurrentLevel() const {return Robot::currentLevel;}
        // Summary: Accesses the static variable current level
        // Precondition: Current level is to be 1-3
        // Postcondition: Returns currentlevel
        //*********************************************************

        //*********************************************************
        int getXPosition() const {return x_position;}
        // Summary: Accesses the robot's x position
        // Precondition: 'x_position' should not be negative
        // Postcondition: Returns x_position
        //*********************************************************

        //*********************************************************
        int getYPosition() const {return y_position;}
        // Summary: Accesses the robot's y_position
        // Precondition: 'y_position' should not be negative
        // Postcondition: Returns y_position
        //*********************************************************

        //*********************************************************
        bool getGameOver() const {return gameOver;}
        // Summary: Accesses the game's satus to see if the game
        // is over or not
        // Precondition: gameOver should be true or false
        // Postcondition: Returns boolean
        //*********************************************************

        // Mutators

        //*********************************************************
        void setRobot(char c);
        // Summary: Changes the value assigned to the robot's character
        // Precondition: 'c' being passed in is a char
        // Postcondition: Robot character will be set to 'c' passed in
        //*********************************************************

        //*********************************************************
        void setCurrentLevel(int current_level);
        // Summary: Changes the value assigned to the current level
        // to the value being passed in
        // Precondition: currentl level being passed in is not negative
        // Postcondition: Current level will be set to value passed in
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
