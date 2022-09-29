#pragma once
#include <iostream>
#include <ostream>
#include <sstream>
struct Complex {
    //создаем тип комплексных чисел
    Complex() {}
    double real = 0, image = 0;

    Complex(const double real, const double image);
    Complex(const double real);

    Complex& operator+=(const Complex& a);
    Complex& operator+=(const double a);


    Complex& operator-=(const Complex& a);

    Complex& operator*=(const Complex& a);
    bool operator==(const Complex& a);
    bool operator!=(const Complex& a);

    //std::ostream& operator<<(std::ostream& a);
    std::ostream& write(std::ostream& ostrm) const;
    std::istream& read(std::istream & istrm);

    //переделать +
    //написать -
    //сделать поточный ввод и вывод
    //нельзя сравнивать вещественные числа через ==
};
/*
Complex operator+(const Complex& a, const Complex& b);
Complex operator+(const double a, const Complex& b);
Complex operator+(const Complex& a, const double b);
*/
inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs)
{
    return rhs.write(ostrm);
}
inline std::istream & operator>>(std::istream & istrm, Complex & rhs)
{
    return rhs.read(istrm);
}