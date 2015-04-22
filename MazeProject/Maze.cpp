
 #include "Maze.h"
 Maze::Maze()
 {
    wall = '*';
    for(int row = 0; row < ROW; row++)
    {
        for(int col = 0; col < COL; col++)
        {
            maze[row][col] = wall;
        }
        cout << endl;
    }
    cout << endl;
 }
 void Maze::generateMaze(int current_level)
 {
    if(current_level == 1)
        //generate a maze
    else if(current_level == 2)
        //generate a maze
    else
        //generate a maze
 }
void Maze::displayMaze()
{
    for(int row = 0; row < ROW; row++)
    {
        for(int col = 0; col < COL; col++)
        {
            cout << maze[row][col];
        }
        cout << endl;
    }
    cout << endl;
}
void Maze::setWall(char c)
{

}
bool Maze::isWall(int x, int y)
{
    if(maze[x][y] == wall)
        return true;

    return false;
}
