#pragma once
#include"math.h"
#include <iostream>
#include <ostream>

struct Rational
{
    Rational() {}
    int num = 0, den = 1;

    
    Rational( const int numb, const int denum) {
        this->num = numb;
        this->den = denum;
    };

    Rational& operator+=(const Rational& a);
    Rational& operator+=(const int a);
    Rational& operator-=(const Rational& a);
    Rational& operator-=(const int a);
    Rational& operator*=(const Rational& a);
    Rational& operator*=(const int a);
    Rational& operator/=(const Rational& a);
    Rational& operator/=(const int a);

    void nod();
    Rational& nok(Rational& a, Rational& b);

    Rational& max(const Rational& a, const Rational& b) const;
    Rational& min(const Rational& a, const Rational& b) const;


    
    std::ostream& write(std::ostream& ostrm) const;
    std::istream& read(std::istream& istrm);

    


};

inline std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs)
{
    return rhs.write(ostrm);
}
inline std::istream& operator>>(std::istream& istrm, Rational& rhs)
{
    return rhs.read(istrm);
}
