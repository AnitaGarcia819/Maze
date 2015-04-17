# Maze
CSS2A Final Project:: Robot and Maze
Language: C++

This code is for an Object Oriented C++ Class. In this program, the robot will be user controlled to navigate through a given maze. As the robot navigates through the maze, it will not be able to move to a location where maze walls are placed. There will be three levels in this game, and each level will have a corresponding maze to reflect the level of difficulty. We will utilize three classes: Level, Maze, Robot. 

The Level class will contain an object of type ‘Maze,’ the Maze class will contain an object of type ‘Robot.’ We will need a way to monitor where the robot currently is, and whether the location it wants to move to is a wall or not. Additionally, we need to keep track when it has reached the end of the maze. The maze will need to be displayed differently at the completion of each level. The user will also have the option to continue onto each level after each level has been completed. Once the robot has reached the end of the third level, the game will terminate and display a job well done. The user will also have the option of quitting at any time at any given level. 

If we complete this in a timely manner, we will add more complexity by adding multiple mazes per level. In this case, our Level class will contain an array of objects of type ‘Maze.’ Each Level will have three Maze objects that relate to the level of difficulty that corresponded to the level. The maze displayed at each level will be randomly generated for each possible level. 


