#ifndef MAZE_H_INCLUDED
#define MAZE_H_INCLUDED
#include "Level.h"
using namespace std;

//const unsigned int ROW = 50;
//const unsigned int COL = 50;
        const int ROW = 50;
        const int COL = 50;
class Maze
{
    private:
        char maze[ROW][COL];
        char wall; //might not need it

    public:
        static int currentLevel;
        Maze();
       // void generateMaze(int current_level);

        char getWall(int x, int y);
        void setWall(char c);
        bool isWall(int x, int y);
        void increaseCurrentLevel();
        int getCurrentLevel() const {return currentLevel;}



};
#endif //MAZE_H_INCLUDED
