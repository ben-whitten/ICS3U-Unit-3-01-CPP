// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: September 2019
// This is a program which can add two numbers together.

#include <iostream>

int main() {
// This is what adds the numbers together.
    int number1;
    int number2;
    int total;

// Input
    std::cout << "Enter number 1 (integer): ";
    std::cin >> number1;

    std::cout << "Enter number 2 (integer): ";
    std::cin >> number2;

// Process
    total = number1 + number2;

// Output
    std::cout << "" << std::endl;
    std::cout << number1 << "+" << number2 << "=" << total << std::endl;
}
