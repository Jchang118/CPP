#include <iostream>
using namespace std;

class Complex
{
    private:
        double real;
        double imag;
    
    public:
        Complex() : real(0.0), imag(0.0)
        {}
        Complex(double re, double im) : real(re), imag(im)
        {}

        Complex Add(const Complex &data);
        Complex Sub(const Complex &data);
        void Show() const;
};

Complex Complex::Add(const Complex &data)
{
    double re = this->real + data.real;
    double im = this->imag + data.imag;    
    return Complex(re, im);
}

Complex Complex::Sub(const Complex &data)
{
    double re = this->real - data.real;
    double im = this->imag - data.imag;    
    return Complex(re, im);
}

void Complex::Show() const
{
    if(this->imag < 0)
        cout << this->real << " - " << -(this->imag) << "i" << endl;
    else
        cout << this->real << " + " << (this->imag) << "i" << endl;
}

int main()
{
    Complex a(1.1, 3.4);
    Complex b(3.3, 5.6);
    a.Show();
    b.Show();
    Complex c = a.Add(b);
    c.Show();
    Complex d = a.Sub(b);
    d.Show();
    
    return 0;
}