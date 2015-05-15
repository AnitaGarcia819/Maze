#define NDEBUG
//*************************************************************
//    filename:Robot.cpp
//    Class Name: Robot
//    Author: Araceli Gopar, Anita Garcia, Ana Perez
//    Date: 4/18/2015
//    Compiler: code blocks 13.12
//    Description: Robots class will mimic a robot finding its
//    way out of maze. Objects of type robot will be able to choose
//    the direction in where to more. This class will use another
//    class Maze and Levels.
//**************************************************************
#include "Robot.h"
#include "Maze.h"
#include <cassert>
#include <iostream>

using namespace std;

int Robot::currentLevel = 1;
//static int variable assignment

Robot::Robot()
{
    //initialize robot's position
    gameOver = false;
    x_position = 0;
    y_position = 0;
    robot = 'x';
    mazeGrid.maze[0][0] = robot;

}
void Robot::setRobot(char c)
{
    //assign a character to represent the robot
    robot = c;
}
void Robot::setCurrentLevel(int current_level)
{
    assert(current_level > 0 && current_level < 4);
    //change current level (there is only 3 levels)
    if(current_level > 0 && current_level < 4)
        Robot::currentLevel = current_level;

    else
        cout << "Level must be from 1 - 3 inclusively." << endl;
}
void Robot::setXposition(int x)
{
    assert(x >= 0 && x < mazeGrid.COL);
    assert(mazeGrid.isWall(x, y_position) == 0);
    //assignment must be in mazeGrid's range
    if(x >= 0 && x < mazeGrid.COL && mazeGrid.isWall(x, y_position)== 0)
    {
        replacePreviousRobot(x_position, y_position);
         x_position = x;
        drawRobot(x, y_position);
    }
    else
        cout << "Robot must stay inside maze of grid: " << mazeGrid.COL << " X "<< mazeGrid.ROW << endl;
}
void Robot::setYposition(int y)
{
    assert(y >= 0 && y < mazeGrid.ROW);
    assert(mazeGrid.isWall(x_position, y) == 0);
    //assignment must be in mazeGrid's range
    if(y >= 0 && y < mazeGrid.ROW && mazeGrid.isWall(x_position, y)== 0)
    {

        replacePreviousRobot(x_position, y_position);
        y_position = y;
        drawRobot(x_position, y);
    }
    else
        cout << "Robot must stay inside maze of grid: " << mazeGrid.COL << " X "<< mazeGrid.ROW << endl;
}
void Robot::setIsGameOver(bool game)
{
    //sets gameOver to true or false
    gameOver = game;
}
void Robot::displayMenu()
{
    //options to move robot
    cout << "(1) Up (2) Down (3) Right (4) Left (5) Quit" << endl;
    cout << "Move: ";
}
void Robot::playGame()
{
    int direction;
    cout << endl << endl;
    cout << "- - - - - - - - - - - " << endl;
    cout << "Welcome to the maze!" << endl;
    cout << "- - - - - - - - - - - " << endl << endl;



      char playAgain;
   do{
        //Resets game
        mazeGrid.generateNewLevel(Robot::currentLevel); //generates maze according to level
        resetRobot(); // Sets Robot to starting position
        mazeGrid.displayMaze(); //displays Maze


    // Loop repeats, allowing player nagivate the maze,
    // until the rob has wither quit or beat the game.
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
                case 1:    moveUp();

                break;
                case 2:    moveDown();
                break;

                case 3:    moveRight();
                break;
                case 4:    moveLeft();
                break;
                case 5:
                        cout << "Now exiting game!" << endl;
                break;
                default: cout << "Wrong input, try again" << endl;
                break;
            }
        }while((direction != 5) && !gameOver);
        resetGame();
        // Asks user to play an other game, starting at the beginning.
        cout << "Would you like to play again? ";
        cin >> playAgain;

    }while(playAgain != 'n');

}
void Robot::moveUp()
{
    assert(x_position - 1 >= 0);
  //checks if robot can move up
  //if there is a wall, displays a message

   if(x_position - 1 >= 0)
    {

        int next_x = x_position - 1;
        if(mazeGrid.isWall(next_x, y_position))
            cout << ">> There's a wall, try again! << " << endl;
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
        cout << "If you want to keep playing, you have to stay in the maze!"<< endl;
}
void Robot::moveDown()
{
   assert(x_position + 1 < Maze::ROW);
   //checks if robot can move down
  //if there is a wall, displays a message

   if(x_position + 1 < Maze::ROW)
        {
            int next_x = x_position + 1;

            if(mazeGrid.isWall(next_x, y_position))
                cout << ">> There's a wall, try again! << " << endl;
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
        cout << "If you want to keep playing, you have to stay in the maze!"<< endl;

}
void Robot::moveLeft()
{
    assert(y_position - 1 >= 0);
    //checks if robot can move left
    //if there is a wall, displays a message

    if(y_position - 1 >= 0)
        {
            int next_y = y_position - 1;

            if(mazeGrid.isWall(x_position, next_y))
                cout << ">> There's a wall, try again! << " << endl;
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
        cout << "If you want to keep playing, you have to stay in the maze!"<< endl;

}
void Robot::moveRight()
{
    //checks if robot can move right
    //if there is a wall, displays a message
    assert(y_position + 1 < Maze::COL);

    if(y_position + 1 < Maze::COL)
        {
            int next_y = y_position + 1;

            if(mazeGrid.isWall(x_position, next_y))
                cout << ">> There's a wall, try again! << " << endl;
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
        cout << "If you want to keep playing, you have to stay in the maze!"<< endl;

}
void Robot::drawRobot(int next_x, int next_y)
{
    assert((next_x >=0 && next_x < Maze::ROW )&& (next_y >= 0 && next_y < Maze::COL));
    //displays the robot's position
    mazeGrid.maze[next_x][next_y] = robot;
}
void Robot::replacePreviousRobot(int previous_x, int previous_y)
{
    assert((previous_x >= 0 && previous_x < Maze::ROW )&& (previous_y >= 0) && previous_y < Maze::COL) ;
    //erases the robot's past location
   mazeGrid.maze[previous_x][previous_y] = mazeGrid.getDefaultIcon();
}
void Robot::resetRobot()
{
    //if user wants to play again, reset robot& game to default settings
    x_position = 0;
    y_position = 0;
    mazeGrid.maze[0][0] = robot;
    mazeGrid.maze[Maze::ROW - 1][Maze::COL - 1] = mazeGrid.getDefaultIcon();

}
void Robot::increaseCurrentLevel()
{
    assert(Robot::currentLevel < 3);
    //up to level 3
    if(Robot::currentLevel < 3)
        Robot::currentLevel++;

}

void Robot::isLevelFinished(int x_position, int y_position)
{
    assert(x_position >= 0 && x_position < Maze::ROW);
    assert(y_position >= 0 && y_position < Maze::COL);
    isGameOver(x_position, y_position); // Checks to see if robot has finished the last level.

    //condition to check if game is not over
     if(x_position == mazeGrid.ROW - 1 && y_position == mazeGrid.COL - 1 && Robot::currentLevel < 3 && gameOver == false)
     {
        increaseCurrentLevel();
        mazeGrid.generateNewLevel(Robot::currentLevel);
        resetRobot();
        mazeGrid.displayMaze();
     }

}


void Robot::isGameOver(int x_position, int y_position)
{
    assert(x_position >= 0  && x_position < Maze::ROW );
    assert(y_position >= 0 && y_position < Maze::COL);
    //checks to see if game is over
    if (x_position == mazeGrid.ROW - 1 && y_position == mazeGrid.COL - 1 && Robot::currentLevel == 3)
    {
        gameOver = true;
        cout << "Game Over! " << endl;
    }

}

void Robot::resetGame()
{
    assert(gameOver == true);
    //calls the methods to initialize robot and level
    resetRobot();
    Robot::currentLevel = 1;
    gameOver = false;
}
