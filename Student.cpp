/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.27.2017
 *
 * Description: This is the class file that hosts the functions
 * for the Students class.  In here the user is able to add
 * a students score and name to be stored within an object.
 * The user is also able to retrieve those values by using
 * the get member functions as noted below.
**************************************************************/

#include "Student.hpp"


/**************************************************************
 *                  Student::Student
 * Description: Constructor for the class to allow the user
 * to input name and values.
**************************************************************/
Student::Student(std::string userName, double userScore)
{
    name  = userName;
    score = userScore;
}

/**************************************************************
 *                  Student::getName
 * Description: Get function to allow the user to access the
 * name of the student.
**************************************************************/
std::string Student::getName()
{
    return name;
}

/**************************************************************
 *                  Student::getScore
 * Description: Get function to allow the user to access the
 * score the student got.
**************************************************************/
double Student::getScore()
{
    return score;
}


