
#include "Complex.h"

int main() {

	Complex a, b;
	
	a.re = 1.0;
	a.im = 2.0;
	
	
	b.re = 3.0;
	b.im = 5.0;
	Complex n = Complex(1.1, 0.0);
	//Complex e = a+b;
	//(e).print();
	
	//printf("Imagin %f Real %f \n", a.image, a.real);
	
	if(a==b) std::cout << true;

	return 0;
}