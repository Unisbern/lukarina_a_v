#pragma once
#include <iostream>
#include <ostream>
#include <sstream>
#include<limits>
#include <cmath>

static const double EPS = 2 * std::numeric_limits<double>::epsilon();
struct Complex {
    //создаем тип комплексных чисел
    Complex() {};
    double re = 0, im = 0;

    Complex(const double real, const double image){
        this->re = real;
        this->im = image;
    };
    Complex(const double real) {
        this->re = real;
    };

    Complex& operator+=(const Complex& a);
    Complex& operator+=(const double a);
    Complex& operator-=(const Complex& a);
    Complex& operator-=(const double a);

    Complex& operator*=(const Complex& a);
    bool operator==(const Complex& a);
    bool operator!=(const Complex& a);
    double getmodule();

    
    std::ostream& write(std::ostream& ostrm) const;
    std::istream& read(std::istream & istrm);

    //бинарный минус
    //вывод чисел
};

Complex operator+(const Complex& a, const Complex& b);
Complex operator+(const double& a, const Complex& b);
Complex operator+(const Complex& a, const double b);

Complex operator-(const Complex& a, const Complex& b);
Complex operator-(const double& a, const Complex& b);
Complex operator-(const Complex& a, const double b);

inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs)
{
    return rhs.write(ostrm);
}
inline std::istream & operator>>(std::istream & istrm, Complex & rhs)
{
    return rhs.read(istrm);
}