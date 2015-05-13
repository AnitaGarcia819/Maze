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
        // Summary: Chaned the vaule assidned to the x position  to
        // the value being passed in
        // Precondition: value of x can't be negative
        // Postcondition: x position will be set to the value passed
        // in to 'x'
        //*********************************************************

        //*********************************************************
        void setYposition(int y);
        // Summary:Chaned the vaule assidned to the y position  to
        // the value being passed in
        // Precondition: value of x can't be negative
        // Postcondition: x position will be set to the value passed
        // in to 'y'
        //*********************************************************

        //*********************************************************
        void setIsGameOver(bool game);
        // Summary: Changes whether the game is over or not.
        // Precondition: --
        // Postcondition: Sets isGameOver to true or false
        //*********************************************************


        // Member Methods

        //*********************************************************
        void displayMenu();
        // Summary: Displays menu with directional options for the
        // user to decided where he wants to move. Options include
        // moving up, down, right, and left
        // Precondition: Player should need to make a decision to
        // make a move for this to display
        // Postcondition: Menu will be displayed
        //*********************************************************

        //*********************************************************
        void playGame();
        // Summary: This allows the player to play the game. It will
        // start at level one and move through three levels and give
        // the player the option of playing game again.
        // Precondition: Maze will have been set
        // Postcondition: User can play game
        //*********************************************************

        //*********************************************************
        void moveUp();
        //Summary: Player will be able to move up
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void moveDown();
        //Summary: Player will be able to move down
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void moveLeft();
        // Summary: Player will be able to move left
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void moveRight();
        //*********************************************************
        //Summary: Player will be able to move right
        // increasing y's coordinates.
        // Precondition:
        // Postcondition:
        //*********************************************************

        //*********************************************************
        void drawRobot(int next_x, int next_y);
        // Summary: Draws robot in the next x and y coordinates
        // Precondition: next cooridnates must not be negative
        // or out of bound.
        // Postcondition: Robot character will be places in the
        // next cooridanates.
        //*********************************************************

        //*********************************************************
        void replacePreviousRobot(int previous_x, int previous_y);
        // Summary: Replaces previous robot position with the maze's
        // defualt icon.
        // Precondition: previous x and previous y are the cooridantes
        // that the robot is currently on before it moves to the
        // next position.
        // Postcondition: Replaces the previous position of the
        // robot's previous position to the default value.
        //*********************************************************

        //*********************************************************
        void resetRobot();
        // Summary: Set's Robot to the starting position and
        // changes the ending postioin to the maze's default icon.
        // Precondition:
        // Postcondition: Robot is set to the starting position
        //*********************************************************


        //*********************************************************
        void increaseCurrentLevel();
        // Summary: Increases Current Level by one
        // Precondition: Current level should be >= 1
        // Postcondition: Level increases by one
        //*********************************************************

        void isLevelFinished(int x_position, int y_position);
        //*********************************************************
        // Summary: Returns true or false whether the robot
        // has completed the maze and is ready to more to the next level.
        // It also checks to see if the game is over or not, if it's
        // not it will generate new level maze and increase level.
        // Precondition: inputs are not negative
        // Postcondition: Will dispaly game over or new maze.
        //*********************************************************

        //*********************************************************
        void isGameOver(int x_position, int y_position);
        // Summary: Checks to see if game is over.
        // Precondition: x position and y postion but not be negative
        // Postcondition: changes the variable isGameOVer to true or
        // false.
        //*********************************************************

        //*********************************************************
        void resetGame();
        // Summary: Resets game
        // Precondition: Level will be over
        // Postcondition: Changes isGameOver to false, current level
        // to one, and resets robot.
        //*********************************************************

};

#endif // ROBOT_H_INCLUDED
