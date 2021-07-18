#pragma once

class ShapeBox
{
private:
    int length;
    int width;
    
public:
    ShapeBox(int l, int w)
    {
        l = length;
        w = width;
    }
        
    float area()
    {
        return length * width;
    }
    
    int compareWithThis(ShapeBox shape)
    {
        return this->area() > shape.area();
    }
    
    int compare(ShapeBox shapeIn)
    {
        return area() > shapeIn.area();
    }
    
};
