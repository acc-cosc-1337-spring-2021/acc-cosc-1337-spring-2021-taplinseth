//cpp
#include "decision.h"
#include <string>

//functiun converts grade using "if" statement
std::string get_letter_grade_using_if(int numerical_grade)
{

    if(numerical_grade >= 90 && numerical_grade <= 100)
    {
        return "A";
    }
    else if(numerical_grade >= 80 && numerical_grade <= 89)
    {
        return "B";
    }
    else if(numerical_grade >= 70 && numerical_grade <= 79)
    {
        return "C";
    }
    else if(numerical_grade >= 60 && numerical_grade <= 69)
    {
        return "D";
    }
    else if(numerical_grade >= 00 && numerical_grade <= 59)
    {
        return "F";
    }
    else
    {
        return "invalid";
    }

}

//function converts grade using switch statement
std::string get_letter_grade_using_switch(int numerical_grade)
{
    std::string letter_grade;

    switch(numerical_grade)
    {
    case 90 ... 100:
        letter_grade = "A";
        break;
    case 80 ... 89:
        letter_grade = "B";
        break;
    case 70 ... 79:
        letter_grade = "C";
        break;
    case 60 ... 69:
        letter_grade = "D";
        break;
    case 0 ... 59:
        letter_grade = "F";
        break;
    }
    return letter_grade;
}
