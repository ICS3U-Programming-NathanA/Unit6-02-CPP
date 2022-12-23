// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: December 16 2022
// This program generates 10 random
// numbers and display the greatest

#include <time.h>
#include <array>
#include <iostream>
#include <random>
using std::string;

// Declaring MAX_ARRAY_SIZE, MIN_NUM and MAX_NUM as constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

// function that determines the greatest value in the list
int MaxNumber(std::array<int, 10> array) {
    // declare counter and maxValue as integers
    int counter, maxValue;
    // set maxValue to the index of 0 for the array
    maxValue = array[0];

    // for loop that determines if the counter index is greater than maxValue
    for (counter = 1; counter < 10; counter++) {
        if (maxValue < array[counter]) {
            // set maxValue to the array index if its bigger
            maxValue = array[counter];
        }
    }
    // return maxValue
    return maxValue;
}

int main() {
    // Declare arrayOfInt as a list
    std::array<int, 10> arrayOfInt;
    // declare variables as integers
    int totalSum = 0;
    int maxNum = 0;
    int randomNum;
    int counter;
    int counter2;
    srand(time(NULL));
    // For loop to generate the random numbers
    for (counter = 0; counter < 10; counter++) {
        randomNum = (rand() % 100 + 1) + MIN_NUM;
        arrayOfInt[counter] = randomNum;
        std::cout << randomNum << " added to array at index ";
        std::cout << counter << "\n";
    }

    // call MaxNumber(arrayOfInt) to calculate the average
    maxNum = MaxNumber(arrayOfInt);

    std::cout << "\nThe max number is " << maxNum;
}
