/*
 * Write a class called Student that has two data members - a string variable called name and a double variable called
 * score.  It should have a constructor that takes two values and uses them to initialize the data members.  It should
 * have get methods for both data members (getName and getScore), but doesn't need any set methods.
 *
 * Write a separate function called stdDev that takes two parameters - an array of pointers to classroom and the size
 * of the array - and returns the standard deviation for the student scores (the population standard deviation that
 * uses a denominator of N, not the sample standard deviation, which uses a different denominator).
 *
 * (Note: I could have had you use an array of classroom for this instead of an array of pointers to classroom, but I
 * want you to practice pointer syntax.)
 *
 * The files must be named Student.hpp, Student.cpp and stdDev.cpp.
*/
#include <iostream>
#include <cmath>
#include "Student.hpp"

// Prototypes
double stdDev (Student* classroom[], int arraySize);

int main() {

    // Array of Student Pointers
    Student* classroom[4] = {new Student("John", 10),
                             new Student("Susie", 9),
                             new Student("Doug", 8),
                             new Student("Todd", 7)};

    double classDeviation = stdDev(classroom, 4);

    std::cout << "The Standard Deviation for this Class is: " << classDeviation << std::endl;

    delete [] classroom;

    return 0;

}


double stdDev(Student* classroom[], int arraySize) {
    // Sum of their scores
    double x = 0;
    // Sum of their scores squared
    double xSquared = 0;
    // N value, Population size
    double popSize = arraySize;
    // Mu value, population mean
    double popMean;

    // Loop through each student and pull their scores
    for (int i = 0; i < arraySize; i++)
    {
        x += (*classroom[i]).getScore();
        xSquared += pow((*classroom[i]).getScore(), 2.0);
    }

    popMean = x / popSize;

    // Standard deviation for a population formula
    return sqrt((xSquared/popSize) - pow(popMean, 2.0));
}

