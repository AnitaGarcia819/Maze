#ifndef MAZE_H_INCLUDED
#define MAZE_H_INCLUDED
#include "Level.h"
using namespace std;

//const unsigned int ROW = 50;
//const unsigned int COL = 50;
        const int ROW = 10;
        const int COL = 10;
class Maze
{
    private:

        char wall; //might not need it

    public:
        char maze[ROW][COL];
        Maze();
        void generateMaze(int current_level);
        char getWall() const {return wall;}
        void setWall(char c);
        void displayMaze();
};
#endif //MAZE_H_INCLUDED
