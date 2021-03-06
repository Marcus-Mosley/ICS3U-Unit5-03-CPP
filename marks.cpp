// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on November 2020
// This program converts a student's mark into a percentage

#include <iostream>

int percent_convert(std::string mark, int percent) {
    // This function converts a student's mark into a percentage

    if (mark == "4+") {
        percent = 98;
    } else if (mark == "4") {
        percent = 91;
    } else if (mark == "4-") {
        percent = 83;
    } else if (mark == "3+") {
        percent = 78;
    } else if (mark == "3") {
        percent = 75;
    } else if (mark == "3-") {
        percent = 71;
    } else if (mark == "2+") {
        percent = 68;
    } else if (mark == "2") {
        percent = 65;
    } else if (mark == "2-") {
        percent = 61;
    } else if (mark == "1+") {
        percent = 58;
    } else if (mark == "1") {
        percent = 55;
    } else if (mark == "1-") {
        percent = 51;
    } else if (mark == "R") {
        percent = 25;
    } else {
        percent = -1;
    }
    return percent;
}

main() {
    // This function gets the student's mark
    std::string mark;
    int percent;

    // Input
    std::cout << "Enter the student's mark (ex. 4+): ";
    std::cin >> mark;
    std::cout << " " << std::endl;

    // Call Functions
    percent = percent_convert(mark, percent);

    // Output
    std::cout << "The student's mark is " << percent << "%" << std::endl;
}
