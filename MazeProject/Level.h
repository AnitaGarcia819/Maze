#ifndef LEVEL_H
#define LEVEL_H
#include "Maze.h"
class Level{
	private:
		int currentLevel;
		Maze mazeSelection[1];


	public:
		Level();
		int getCurrentLevel() const {return currentLevel;}
		void setCurrentLevel();
};

#endef LEVEL_H




