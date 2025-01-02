#pragma once

class Box
{
    private:
        double length;
        double breadth;
        double height;
    
    public:
    // Default Constructor
        Box();
    // Parameterised Consturctor
        Box(double, double, double);
    
    // Member function declaration
        double getVolume(void);
        void setLength(double len);
        void setBreadth(double bre);
        void setHeight(double hei);
        Box& copy(const Box& rhs);
};
