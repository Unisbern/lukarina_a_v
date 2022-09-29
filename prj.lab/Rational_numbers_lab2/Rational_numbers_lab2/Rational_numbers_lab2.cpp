#include "Rational.h"

int main()
{
    Rational a, b;
    a.num = 1; a.den = 2;
    b.num = 5;b.den = 2;
    a /= b;
    std::cout << a;
}
