#include <iostream>
#include "box.h"

Box::Box(){
    length = 3.0;
    breadth = 4.0;
    height = 5.0;
}
Box::Box(double length, double breadth, double height){
    this->length = length;
    this->breadth = breadth;
    this->height = height;
}

Box& Box::copy(const Box& rhs)
{
    this->length = rhs.length;
    this->breadth = rhs.breadth;
    this->height = rhs.height;

    return *this;
}

int main()
{
    Box box1;               // call the default constructor implicitly
    Box box2 = Box();       // call the default constructor explicitly
    Box *pbox = new Box;    // call the default constructor implicitly

    Box first(5.0, 6.0, 9.0);   // call the nondefault constructor
    Box seccond();              // declare a function not call the default constructor, second() is a function that returns a Box object
    Box third;                  // call the default constructor implicitly              
    box1.copy(first);
    
    return 0;
}
