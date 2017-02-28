/*
 * Write a class called Student that has two data members - a string variable called name and a double variable called
 * score.  It should have a constructor that takes two values and uses them to initialize the data members.  It should
 * have get methods for both data members (getName and getScore), but doesn't need any set methods.
 *
 * Write a separate function called stdDev that takes two parameters - an array of pointers to Students and the size
 * of the array - and returns the standard deviation for the student scores (the population standard deviation that
 * uses a denominator of N, not the sample standard deviation, which uses a different denominator).
 *
 * (Note: I could have had you use an array of Students for this instead of an array of pointers to Students, but I
 * want you to practice pointer syntax.)
 *
 * The files must be named Student.hpp, Student.cpp and stdDev.cpp.
*/
#include <iostream>
#include <cmath>
#include "Student.hpp"

// Prototypes
double stdDev (Student students[], int arraySize);

int main() {

    Student students[] = { {"John", 10},
                           {"Susie" , 9},
                           {"Doug", 8},
                           {"Todd", 7} };

    // MAKE SEPARATE STUDENT CALLS
    Student john("John", 10);
    Student susie("Susie", 9);
    Student doug("Doug", 8);
    Student todd("Todd",7);

    // Array of Student Pointers

    std::cout << "Standard Deviation = " << stdDev(students, 4);
    return 0;

}


double stdDev(Student students[], int arraySize) {
    double x = 0;
    double xSquared = 0;
    double popSize = arraySize;
    double popMean;

    for (int i = 0; i < arraySize; i++)
    {
        x += students[i].getScore();
        xSquared += pow(students[i].getScore(), 2.0);
    }

    popMean = x / popSize;

    return sqrt((xSquared/popSize) - pow(popMean, 2.0));


}

