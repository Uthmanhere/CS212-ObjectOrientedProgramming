# Polymorphism
The program to implement polymorphism in the form of shapes as
those of circles and rectangles.

## Lab Task
### Introduction
Create a simple application that allows different *Shapes* to be rendered
on a *‘Canvas’*. Implement class ‘Canvas’ containing different shapes.
### Shape
Implement a  class ‘Shape’ that defines a common interface for its
derived classes with following set of attributes and methods
- attributes: Position(xlocation, ylocation), area, fillcolor, linecolor, etc.
- methods: setPosition(…) , getPosition( ), calcArea( ), remove( ) ,etc.
### Abstract Functions
Extend the functionality of class ‘Shape’ by creating its derived classes
‘Circle’ and ‘Rectangle’. Redefine the abstract functions of class ‘Shape’.
### Programming Interface
The programming interface of the application should provide following functions
1. add objects of Rectangle and Circle to the Canvas
2. delete all or a single object
3. print status of canvas: shows total objects on Canvas, subtotal for each shape and their position.

## Prerequisites
- The program is using *ncurses* library, hence it *NOT* cross-platform and hence linux specific.
- *ncurses* can be installed by
	sudo apt-get install libncurses5-dev libncursesw5-dev
## Classes
- Canvas
- Shape
- Rectangle
- Square
### Files
- Source.cpp
- Canvas.hpp	Canvas.cpp
- Shape.hpp		Shape.cpp
- Circle.hpp	Circle.cpp
- Rectangle.hpp	Rectangle.cpp
