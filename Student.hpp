#pragma once
#include <stdio.h>
#include <string>

class Student
{
        std::string name;
        int id;
        int gradDate;

    public:
        void setName(std::string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        std::string getName();
        int getId();
        int getGradDate();
        void print();
};
