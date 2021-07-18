//


#include "Student.hpp"
#include <iostream>

//setters for private members of class Student
void Student::setName(std::string nameIn)
{
    name = nameIn;
}

void Student::setId(int idIn)
{
    id = idIn;
}

void Student::setGradDate(int dateIn)
{
    gradDate = dateIn;
}

//getter for private members of class Student
std::string Student::getName()
{
    return name;
}

int Student::getId()
{
    return id;
}

int Student::getGradDate()
{
    return gradDate;
}

void Student::print() { 
    std::cout << name << " " << id << " " << gradDate << std::endl;
}



