// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew-Ten-Den
// Created on: April 2022
// This program adds all positive integers

#include <iostream>
#include <string>


main() {
    // this function adds all positive integers
    int integer;
    int totalSum = 0;
    int counter = 1;
    int amount;
    std::string amountAsString;
    std::string integerAsString;

    // input
    std::cout << "Enter how many numbers you will input (ex: 10): ";
    std::cin >> amountAsString;
    try {
        amount = std::stoi(amountAsString);
        // process & output
        while (amount >= counter) {
            std::cout << "Enter an integer: ";
            std::cin >> integerAsString;

            try {
                integer = std::stoi(integerAsString);
                counter = counter + 1;
                if (integer > 0) {
                    totalSum = totalSum + integer;
                } else if (integer < 0) {
                    continue;
                }
            } catch (std::invalid_argument) {
                std::cout << "That was not a valid integer.\n";
            }
        }
    std::cout << "\nThe total sum is " << totalSum << std::endl;
    } catch (std::invalid_argument) {
                std::cout << "\nThat was not a valid integer.\n";
    }
}
