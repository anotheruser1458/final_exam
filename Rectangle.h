///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef FINAL_EXAM_RECTANGLE_H
#define FINAL_EXAM_RECTANGLE_H

#include <stdexcept>
#include "Shape.h"

class Rectangle: public Shape {
protected:
    double length;
    double width;
public:

    Rectangle(double newLength, double newWidth) {
        if (newLength <=0 || newWidth <=0) {
            throw std::invalid_argument("length and width must be > 0");
        }
        Rectangle::length = newLength;
        Rectangle::width = newWidth;
    }

    double getLength() const;

    double getWidth() const;

    double compute_area() override;
};


#endif //FINAL_EXAM_RECTANGLE_H
