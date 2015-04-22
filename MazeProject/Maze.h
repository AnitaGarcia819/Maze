#ifndef MAZE_H_INCLUDED
#define MAZE_H_INCLUDED
#include "Level.h"
using namespace std;

//const unsigned int ROW = 50;
//const unsigned int COL = 50;

class Maze
{
    private:
        const unsigned int ROW = 50;
        const unsigned int COL = 50;
        char maze[ROW][COL];
        char wall; //might not need it

    public:
        Maze();
        void generateMaze(int current_level);
        void displayMaze();
        char getWall() const {return wall;}
        void setWall(char c);
        bool isWall(int x, int y);


};
#endif //MAZE_H_INCLUDED
