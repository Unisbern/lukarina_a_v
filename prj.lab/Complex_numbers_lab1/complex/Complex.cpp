#include "Complex.h"

Complex& Complex::operator+=(const Complex& a) {
    image += a.image;
    real += a.real;
    return *this;
}
Complex& Complex::operator+=(const double a)
{
    real += a;
    return *this;
}


Complex operator+(const Complex& a, const Complex& b)
{
    Complex sum=a;
    sum += b;
    return sum;
}
Complex operator+(const double a, const Complex& b)
{
    return Complex(a + b.real, b.image);
}
Complex operator+(const Complex& a, const double b)
{
    return Complex(a.real + b, a.image);
}



Complex& Complex::operator-=(const Complex& a)
{
    image -= a.image;
    real -= a.real;
    return *this;
}


Complex& Complex::operator*=(const Complex& a)
{
    Complex ans;
    ans.real = real * a.real - image * a.image;
    ans.image = real * a.image + a.real * image;
    return ans;
}



bool Complex::operator==(const Complex& a)
{
    return (real == a.real && image == a.image);
}

bool Complex::operator!=(const Complex& a)
{
    return !operator==(a);
}


//¬вод и вывод
/*
inline std::ostream& operator<<(std::ostream& stream, const Complex& a) {
    return a.write(stream);
}

inline std::istream& operator>>(std::istream& istream, Complex& a)
{
    return a.read(istream);
}
*/
std::ostream& Complex::write(std::ostream& ostream) const{
    ostream << real << "," << image ;
    return ostream;
}

std::istream& Complex::read(std::istream& istream)
{
    char comma;
    istream >> real >> comma >> image;
    return istream;
}
