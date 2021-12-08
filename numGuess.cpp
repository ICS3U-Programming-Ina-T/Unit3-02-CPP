// Copyright (c) 2021 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Dec. 7, 2021
// This program determines if a user has
// guessed the magic number.

#include <iostream>

int main() {
    // this function checks if the user has
    // entered the correct number
    const int MAGIC_NUMBER = 7;
    int numberOfStudents;

    // input
    std::cout << "Enter an integer number between 0 and 9: ";
    std::cin >> numberOfStudents;
    std::cout << "" << std::endl;

    // process
    if (numberOfStudents == MAGIC_NUMBER) {
        // output
        std::cout << "You are correct, congratulations!";
    } else {
        std::cout << "You are wrong!";
        }
}
