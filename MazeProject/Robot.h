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

class Robot
{

    private:
        Maze mazeGrid;
        int x_position, y_position;
        char robot;

    public:
        Robot();
        //*********************************************************
        //Summary: Constructor, will initialize an object's variables.
        //condition:
        // Precondition:
        //*********************************************************
        bool isWall(int x_position, int y_position);
        //*********************************************************
        //Summary: isWall will return true or false whether there is
        //         char (a wall) in the direction of where the robot
        //         wants to move.
        //condition:
        // Precondition:
        //*********************************************************

        bool isFinished(int x_position, int y_position);
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

};
#endif // ROBOT_H_INCLUDED
