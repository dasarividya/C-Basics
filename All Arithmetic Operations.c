/* All Arithmetic Operations */
#include<stdio.h>
void main()
{
	// Variable Declaration
	int a, b, s, p, d, q, r;
	// Initialization
	a= 22;
	b= 2;
	
	s= a+b;
	p= a*b;
	d= a-b;
	q= a/b;
	r= a%b;
	
	// Output
	printf("Sum of %d and %d is: %d\n", a, b, s);
	printf("Product of %d and %d is: %d\n", a, b, p);
	printf("Difference of %d and %d is: %d\n", a, b, d);
	printf("Quotient of %d and %d is: %d\n", a, b, q);
	printf("Remainder of %d and %d is: %d", a, b, r);
	
}
