//
// Created by Scrup on 2/28/2017.
//

#ifndef PROJ8B_STUDENT_HPP
#define PROJ8B_STUDENT_HPP

#include <string>

class Student {
private:
    std::string name;
    double      score;

public:
    // Default constructor
    Student(std::string userName, double userScore);

    std::string getName();

    double getScore();



};


#endif //PROJ8B_STUDENT_HPP
