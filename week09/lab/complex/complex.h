// complex.h -- Complex class without operator overloading
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

#endif // _MYCOMPLEX_H