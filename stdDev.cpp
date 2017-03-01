/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.27.2017
 *
 * Description: This program hosts a function known as stdDev
 * which allows the user to provide it with an array of pointers
 * aimed at objects, as well as the size of array, and will
 * return to the user the standard deviation between the students
 * stored scores.
**************************************************************/

#include <iostream>
#include <cmath>
#include "Student.hpp"

// Prototypes
double stdDev (Student* classroom[], int arraySize);


int main() {

    // Array of Student Pointers
    Student* classroom[] =  {new Student("John", 10),
                             new Student("Susie", 9),
                             new Student("Doug", 8),
                             new Student("Todd", 7)};

    double classDeviation = stdDev(classroom, 4);

    std::cout << "The Standard Deviation for this Class is: " << classDeviation << std::endl;

    // Free up allocated memory once we are done with it.


    return 0;

}


/**************************************************************
 *                  stdDev
 * Description: Function that allows the user to provide an
 * array of pointers and the size of the array and will be
 * returned the standard deviance for the array of students
 * scores.
 *
 * Sites used to confirm formula:
 * http://www.miniwebtool.com/population-standard-deviation-calculator/
 * https://www.mathsisfun.com/data/standard-deviation-formulas.html
 *
**************************************************************/
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

        // Free up allocated memory once we are done with it.
        delete classroom[i];
    }

    // Calculate the population mean after obtaining sum of x
    popMean = x / popSize;

    // Standard deviation for a population formula
    return sqrt((xSquared/popSize) - pow(popMean, 2.0));
}

