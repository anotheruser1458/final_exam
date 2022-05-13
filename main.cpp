///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  final_exam - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "main.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Square mySquare(2);
    std::cout << "The area of mySquare is: "
              << mySquare.compute_area()
              << std::endl;

    Rectangle myRectangle( 2, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle.compute_area()
              << std::endl;

    return 0;
}