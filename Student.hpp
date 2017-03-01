/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.27.2017
 *
 * Description: This is the header class file that hosts the functions
 * for the Students class.  In here the user is able to add
 * a students score and name to be stored within an object.
 * The user is also able to retrieve those values by using
 * the get member functions as noted below.
**************************************************************/

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student
{
private:
    std::string name;
    double      score;

public:
    // Default constructor
    Student(std::string userName, double userScore);

    // Get Functions
    std::string getName();
    double getScore();
};


#endif //STUDENT_HPP
