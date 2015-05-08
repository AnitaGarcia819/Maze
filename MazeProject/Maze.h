#ifndef MAZE_H_INCLUDED
#define MAZE_H_INCLUDED
using namespace std;

//const unsigned int ROW = 50;
//const unsigned int COL = 50;

class Maze
{
    private:
        char defaultIcon;
        char wall; //might not need it

    public:
        const static int ROW = 2;
        const static int COL = 2;
        char maze[ROW][COL];
        Maze();
        void generateNewLevel(int current_level);
        char getDefaultIcon() const{return defaultIcon;}
        void setDefaultIcon(char i);
        char getWall() const {return wall;}
        void setWall(char c);
        void displayMaze();
        bool isWall(int x_position, int y_position);
        //*********************************************************
        //Summary: isWall will return true or false whether there is
        //         char (a wall) in the direction of where the robot
        //         wants to move.
        //condition:
        // Precondition:
        //*********************************************************
};
#endif //MAZE_H_INCLUDED
