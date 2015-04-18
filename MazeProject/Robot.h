#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED

class Robot
{

    private:
        int x_position, y_position;
        char robot;

    public:
        Robot();
        bool isWall(int x_position, int y_position);
        bool isFInish(int x_position, int y_position);
        void moveLeft();
        void moveRight();
        void moveUp();
        void moveDown();

};
#endif // ROBOT_H_INCLUDED
