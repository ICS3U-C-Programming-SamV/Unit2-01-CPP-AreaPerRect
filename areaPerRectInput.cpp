// Copyright (c) 2026 Sam Vergara All-rights reserved.
// Created by: Sam Vergara
// Date: •Sep. 22. 2026
// This program asks the user for the length and width of
// a rectangle, calculates and displays the area and perimeter
// back to user with proper units

#include <iostream>

int main() {
    // declare variables
    int length;
    int width;
    int area;
    int perimeter;

    // get the length from the user
    std::cout << "Enter the length (cm): ";
    std::cin >> length;

    std::cout << "Enter the width (cm): ";
    std::cin >> width;

    // calculate the area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // display the area
    std::cout << "The area is: " << area << " cm²" << std::endl;
    std::cout << "The perimeter is: " << perimeter << " cm" << std::endl;
}
