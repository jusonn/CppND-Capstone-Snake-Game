# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

The game fundamental snake game with random snake speed and two food. Two foods are given whenever snake eats the food. Snake's speed is randomly choosen between 0 and 1. Snake grows when food is provided and dies when biting itself.

<img src="snake_game.gif"/>

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## Code structure

<img src="imgs/codestructure.png">

There are main classes of this game. `Game`, `Controller`, `Renderer` and `Snake`.

*Game* class is consisted of `Controller`, `Renderer` and `Snake`. `Game` class execute the game and manage all other classes.

*Renderer* class renders the game by SDL library. Window and all the components are drawing by `Renderer` class.

*Snake* class creates Snake object, such as speed, movement etc.

*Controller* class connects inputs and snake move.

## Rubric Points
Indicating where the code that the rubric points are addressed.

### Loops, Functions, I/O
| Rubric | explanation |
| -- | -- |
| A variety of control structures are used in the project. The project code is clearly organized into functions. | snake game is organized into functions.
| The project reads data from an external file or writes data to a file as part of the necessary operation of the program. | Result of the game is saved as a text file. See main.cpp `saveResult()` |
| The project accepts input from a user as part of the necessary operation of the program. | Snake moves as user input given. |

### OOP

| Rubric | explanation |
| --- | --- |
|The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.| There are 4 classes. |
| All class data members are explicitly specified as public, protected, or private. | All classes are specified as public, private, protected. See `controller.h`, `game.h`, `renderer.h`, `snake.h` |
| All class members that are set to argument values are initialized through member initialization lists.| `Snake` object is initialized through member initialization. |
| Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions. | Member data are hidden from the user. And state like score and size is given by getter | 

### Memory Management

| Rubric | explanation |
| --- | --- |
| At least two variables are defined as references, or two functions use pass-by-reference in the project code. | In `controller.cpp`, `game.h`, `renderer.cpp`, there are variables defined as references. |
