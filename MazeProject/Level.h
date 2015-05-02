#ifndef LEVEL_H
#define LEVEL_H
#include "Maze.h"
class Level{
	private:
		int currentLevel;
		//Maze mazeSelection;


	public:
		Level();
		int getCurrentLevel() const {return currentLevel;}
		void setCurrentLevel();
};

#endif // LEVEL_H




