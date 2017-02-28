//
// Created by Scrup on 2/28/2017.
//

#include "Student.hpp"
#include <string>

Student::Student(std::string userName, double userScore)
{
    name  = userName;
    score = userScore;
}

std::string Student::getName()
{
    return name;
}

double Student::getScore()
{
    return score;
}


