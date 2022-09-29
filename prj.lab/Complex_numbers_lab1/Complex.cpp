#include "Complex.h"

Complex& Complex::operator+=(const Complex& a) {
    im += a.im;
    re += a.re;
    return *this;
}
Complex& Complex::operator+=(const double a)
{
    re += a;
    return *this;
}
Complex& Complex::operator-=(const Complex& a)
{
    im -= a.im;
    re -= a.re;
    return *this;
}
Complex& Complex::operator-=(const double a)
{
    re += a;
    return *this;
}


Complex operator+(const Complex& a, const Complex& b)
{
    Complex sum = a;
    sum += b;
    return sum;
}
Complex operator+(const double& a, const Complex& b)
{
    return Complex(a + b.re, b.im);
}
Complex operator+(const Complex& a, const double b)
{
    return Complex(a.re + b, a.im);
}


Complex operator-(const Complex& a, const Complex& b)
{
    Complex sum = a;
    sum -= b;
    return sum;
}
Complex operator-(const double& a, const Complex& b)
{
    return Complex(a - b.re, b.im);
}
Complex operator-(const Complex& a, const double b)
{
    return Complex(a.re - b, a.im);
}


Complex& Complex::operator*=(const Complex& a)
{
    double reT = re * a.re - im * a.im;
    im = re * a.im + a.re * im;
    re = reT;
    return *this;
}

double Complex::getmodule()
{
    return sqrt(re * re + im * im);
}

bool Complex::operator==(const Complex& a)
{
    return (std::abs(re - a.re) <= EPS && std::abs(im - a.im) <= EPS);
}

bool Complex::operator!=(const Complex& a)
{
    return !(std::abs(re - a.re) <= EPS && std::abs(im - a.im) <= EPS);
}



std::ostream& Complex::write(std::ostream& ostream) const{
    ostream << re << "," << im ;
    return ostream;
}

std::istream& Complex::read(std::istream& istream)
{
    char comma=',';
    istream >> re >> comma >> im;
    if (istream.good()) {
        
    }
    else { 
        istream.setstate(std::ios_base::failbit);
    }
    return istream;
}
