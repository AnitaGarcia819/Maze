#ifndef MAZE_H_INCLUDED
#define MAZE_H_INCLUDED
/*
******************************************************************************
    filename:Maze.h
    Class Name: Maze
    Author: Araceli Gopar, Anita Garcia, Ana Perez
    Date: 4/18/2015
    Compiler: code blocks 13.12
    Description: Maze class generates a maze depending on the current level.
    There are three leves, therefore; there are three mazes. This class, also
    determines if the Robot can make a move by checking if there is a wall on
    the location the Robot wants to move to.
******************************************************************************
*/
using namespace std;
class Maze
{
    private:
        //data members
        char defaultIcon;
        char wall;

    public:
        //size of maze
        const static int ROW = 25;
        const static int COL = 25;
        //array that will hold the mazes
        char maze[ROW][COL];
        //***************************************************************************
        Maze();
        //Summary: default constructor that fills the maze array with the defaultIcon(empty
        //spaces. It also assigns the wall a value of char(26) and defaultIcon is
        //assigned an empty space value.
        //Precondition: none
        //Postcondition: maze, wall, and defaultIcon are assigned some value
        //***************************************************************************

        //***************************************************************************
        void generateNewLevel(int current_level);
        //Summary: this function generates a new level depending on the value of
        //current_level
        //Precondition: current_level must be in the range between (1-3)
        //Postcondition: a maze is generated and stored in an array called maze
        //****************************************************************************

        //***************************************************************************
        char getDefaultIcon() const{return defaultIcon;}
        //Summary: returns defaultIcon
        //Precondition: none
        //Postcondition:defaultIcon is returned
        //****************************************************************************

        //******************************************************************************
        void setDefaultIcon(char i);
        //Summary: setDefaultIcon assigns i to defaultIcon, which represents the pathway
        //Robot can move to.
        //Precondition: i must be a character
        //Postcondition: defaultIcon is assigned the value of i
        //******************************************************************************
        char getWall() const {return wall;}
        //Summary: getWall returns the wall, which is a character that represents a wall
        //Precondition: none
        //Postcondition: wall is returned
        //****************************************************************************

        //***************************************************************************
        void setWall(char c);
        //Summary: sets the wall for the maze
        //Precondition: the wall must be a character
        //Postcondition: wall is assigned  c ( the representation of wall)
        //****************************************************************************
        void displayMaze();
        //Summary: displays the maze at current_level
        //Precondition: none
        //Postcondition:maze is displayed
        //****************************************************************************

        //***************************************************************************
        bool isWall(int x_position, int y_position);
        //**************************************************************************
        //Summary: isWall will return true or false whether there is a wall in the
        // direction of where the robot wants to move.
        //Precondition: x_position, y_position must be within the range of the maze
        //Postcondition: returns true or false depnding if there is a wall or not
        //**************************************************************************

        //***************************************************************************
        void resetMaze();
        //Summary: Maze is reset to an emtpy array of defaultIcon, so that it can be
        //filled with walls again, if the current_level increases
        //Precondition: resetMaze is only called if the maze will change
        //Postcondition: maze array is filled with defaultIcon
        //****************************************************************************
};
#endif //MAZE_H_INCLUDED
