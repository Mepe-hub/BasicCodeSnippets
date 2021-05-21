//
//  Object.cpp
//  Play_around
//
//  Created by Andreas Reinbott on 21.05.21.
//
#include <iostream>
#include "Object.hpp"


int Object::multi(int x, int y) { 
    return x*y;
}

void Object::print(int x, int y) { 
    std::cout << x << " " << y;
}
