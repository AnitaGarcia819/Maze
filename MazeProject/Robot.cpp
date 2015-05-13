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
    gameOver = false;
    x_position = 0;
    y_position = 0;
    robot = 'x';
    mazeGrid.maze[0][0] = robot;

}

void Robot::isLevelFinished(int x_position, int y_position)
{
    isGameOver(x_position, y_position); // Checks to see if robot has finished the last level.


     if(x_position == mazeGrid.ROW - 1 && y_position == mazeGrid.COL - 1 && Robot::currentLevel < 3 && gameOver == false)
     {
        increaseCurrentLevel();
        mazeGrid.generateNewLevel(Robot::currentLevel);
        resetRobot();
        mazeGrid.displayMaze();
     }

}
void Robot::resetGame()
{
    resetRobot();
    Robot::currentLevel = 1;
    gameOver = false;
}
void Robot::resetRobot()
{
    x_position = 0;
    y_position = 0;
   mazeGrid.maze[0][0] = robot;
   mazeGrid.maze[Maze::ROW - 1][Maze::COL - 1] = mazeGrid.getDefaultIcon();

}
void Robot::moveLeft()
{
    //assert(y_position - 1 >= 0);
    if(y_position - 1 >= 0)
        {

            int next_y = y_position - 1;

            if(mazeGrid.isWall(x_position, next_y))
                {
                    cout << ">> There's a wall, try again! << " << endl;
                }

            else
                {
                    y_position = y_position - 1;
                    drawRobot(x_position, y_position);
                    replacePreviousRobot(x_position, y_position + 1);
                    mazeGrid.displayMaze();
                    isLevelFinished(x_position, y_position);
                }
        }
    else
        {
            cout << "If you want to keep playing, you have to stay in the maze!"<< endl;

        }

}
void Robot::moveRight()
{

    //assert(y_position + 1 <= 10);
    if(y_position + 1 < Maze::COL)
        {
            int next_y = y_position + 1;

            if(mazeGrid.isWall(x_position, next_y))
                {
                    cout << ">> There's a wall, try again! << " << endl;
                }
            else
                {
                    y_position = y_position + 1;
                    drawRobot(x_position, y_position);
                    replacePreviousRobot(x_position, y_position - 1);
                    mazeGrid.displayMaze();
                    isLevelFinished(x_position, y_position);
                }
        }
     else
        {
            cout << "If you want to keep playing, you have to stay in the maze!"<< endl;

        }

}
void Robot::moveUp()
{
   // assert(x_position - 1 >= 0);
   if(x_position - 1 >= 0)
    {

        int next_x = x_position - 1;
        if(mazeGrid.isWall(next_x, y_position))
            {
                cout << ">> There's a wall, try again! << " << endl;
            }
        else
            {
                x_position = x_position - 1;
                drawRobot(x_position, y_position);
                replacePreviousRobot(x_position + 1, y_position);
                mazeGrid.displayMaze();
                isLevelFinished(x_position, y_position);
            }
   }
   else
        {
            cout << "If you want to keep playing, you have to stay in the maze!"<< endl;

        }
}
void Robot::moveDown()
{

   // assert(x_position + 1 < 10);
   if(x_position + 1 < Maze::ROW)
        {
            int next_x = x_position + 1;

            if(mazeGrid.isWall(next_x, y_position))
                {
                    cout << ">> There's a wall, try again! << " << endl;
                }
            else
                {
                    x_position = x_position + 1;
                    drawRobot(x_position, y_position);
                    replacePreviousRobot(x_position - 1, y_position);
                    mazeGrid.displayMaze();
                    isLevelFinished(x_position, y_position);
                }
        }
   else
        {
            cout << "If you want to keep playing, you have to stay in the maze!"<< endl;

        }

}
void Robot::setRobot(char c)
{
    robot = c;
}


void Robot::setCurrentLevel(int current_level)
{
    Robot::currentLevel = current_level;
}

void Robot::setXposition(int x)
{
    x_position = x;
}

void Robot::setYposition(int y)
{
    y_position = y;
}

void Robot::setIsGameOver(bool game)
{
    gameOver = game;
}

void Robot::increaseCurrentLevel()
{
    if(Robot::currentLevel < 3)
        Robot::currentLevel++;

}
void Robot::drawRobot(int next_x, int next_y)
{
    mazeGrid.maze[next_x][next_y] = robot;
}
void Robot::replacePreviousRobot(int previous_x, int previous_y)
{
   mazeGrid.maze[previous_x][previous_y] = mazeGrid.getDefaultIcon();
}
void Robot::playGame()
{
    int direction;
    cout << endl << endl;
    cout << "- - - - - - - - - - - " << endl;
    cout << "Welcome to the maze!" << endl;
    cout << "- - - - - - - - - - - " << endl << endl;
    mazeGrid.generateNewLevel(Robot::currentLevel);
    mazeGrid.displayMaze();

    do{
        displayMenu();
        cin >> direction;
        while(cin.fail())
        {
            cin.clear(); // clears error flag
            cin.ignore(); // clears input
            cout << "Wrong input try again.\n";
            displayMenu();
            cin >> direction;
        }

            switch(direction)
            {
                case 1: moveUp();

                break;
                case 2: moveDown();
                break;

                case 3: moveRight();
                break;
                case 4: moveLeft();
                break;
                default: cout << "Wrong input, try again" << endl;
                break;
            }

        }while((direction != 5) && !gameOver);


}
void Robot::isGameOver(int x_position, int y_position)
{
    if (x_position == mazeGrid.ROW - 1 && y_position == mazeGrid.COL - 1 && Robot::currentLevel == 3)
    {
        gameOver = true;
        cout << "Game Over! " << endl;
    }

}
void Robot::displayMenu()
{
    cout << "(1) Up (2) Down (3) Right (4) Left (5) Quit" << endl;
    cout << "Move: ";
}
