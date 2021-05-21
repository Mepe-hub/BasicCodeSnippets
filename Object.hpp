#pragma once

class Object{
  
public:
    void print(int x, int y);
    int multi(int x, int y);
   Object()
    {
       std::cout << x << y << std::endl; //prints private members
   }
private:
    int x = 2;
    int y = 4;
};
