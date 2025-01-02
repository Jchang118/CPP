#pragma once

class StaticTest
{
    private:
        static int m_value;     // declare a static variable

    public:
        static int getValue()   // define a static member function
        {
            return m_value;
        }
};

int StaticTest::m_value = 12;   // define and initialise the static variable outside the class definition