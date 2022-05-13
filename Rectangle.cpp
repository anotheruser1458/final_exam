///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Rectangle.h"
#include <iostream>

double Rectangle::compute_area() {
    return Rectangle::width * Rectangle::length;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}
