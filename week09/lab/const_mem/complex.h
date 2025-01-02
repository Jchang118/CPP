// complex.h -- Complex class without operator overloading
#include <iostream>
#ifndef _MYCOMPLEX_H
#define _MYCOMPLEX_H

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex();
        Complex(double re, double im);
        Complex Add(const Complex& data);
        void Show() const;
};

void Complex::Show() const{
    std::cout << real << " + " << imag << "i" << std::endl;
}

#endif // _MYCOMPLEX_H