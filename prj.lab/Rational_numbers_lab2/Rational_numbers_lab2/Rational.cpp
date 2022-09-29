#include "Rational.h"

Rational& Rational::operator+=(const Rational& a)
{
    //if (den != a.den) nok(*this, a);
    num += a.num; den += a.den;
    
    return *this;
}

Rational& Rational::operator+=(const int a)
{
    num += a * den;
    return *this;
}

Rational& Rational::operator-=(const Rational& a)
{
    num -= a.num; den -= a.den;
    return *this;
}

Rational& Rational::operator-=(const int a)
{
    num -= a * den;
    return *this;
}

Rational& Rational::operator*=(const Rational& a)
{
    num *= a.num; den *= a.den;
    return *this;
}

Rational& Rational::operator*=(const int a)
{
    num *= a;
    return *this;
}

Rational& Rational::operator/=(const Rational& a)
{
    num *= a.den; den *= a.num;
    return *this;
}

Rational& Rational::operator/=(const int a)
{
    den *= a;
    return *this;
}

void Rational::nod()
{
    int min = num > den ? den : num;
    int max = num > den ? num : den;
    for (int i = sqrt(min) + 1;i > 0;i--)
    {
        if (max % i == 0 && min % i == 0)
        {
            num /= i; den /= i;
            return;
        }
    }
}



Rational& Rational::nok(Rational& a, Rational& b)
{
    int min = num > den ? den : num;
    int max = num > den ? num : den;
    int nod = 0;
    for (int i = sqrt(min) + 1;i > 0;i--)
    {
        if (max % i == 0 && min % i == 0)
        {
            nod = i; break;
        }
    }
    int nok = a.den * b.den / nod;
    a.num *= nok / b.den;
    b.num *= nok / a.den;

    a.den, b.den = nok;
    return a, b;
}

Rational& Rational::max(const Rational& a, const Rational& b)
{
    /*Rational ans;
    if (a.den == b.den) {
        ans.num = a.num > b.num ? a.num : b.num;
        ans.den = a.den;
    }
    else  ans = a.num * b.den > b.num * a.den ? a: b;
    return ans;
    */
    if (a.den == b.den) return a.num > b.num ? a : b;
    else  return a.num * b.den > b.num * a.den ? a : b;

}
Rational& Rational::min(const Rational& a, const Rational& b) 
{
    Rational ans;
    if (a.den == b.den) {
        ans.num = a.num < b.num ? a.num : b.num;
        ans.den = a.den;
    }
    else  ans = a.num * b.den > b.num * a.den ? b : a;
    return ans;
}


std::ostream& Rational::write(std::ostream& ostrm) const
{
    std::cout << num << '/' << den;
}

std::istream& Rational::read(std::istream& istrm)
{
    char palka = 0;
    int nu=0; int du=0;
    istrm >> nu >> palka >> du;
    if (istrm.good()&& du > 0) {
        num = nu; den = du;
    }
    else istrm.setstate(std::ios_base::failbit);
    return istrm;

}
