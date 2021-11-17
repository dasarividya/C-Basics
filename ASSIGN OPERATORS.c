/* Assignment Operators */
#include<stdio.h>
void main()
{
	int a = 40 , b = 2;
	a += b; // 42 2
	a -= b; // 40 2
	b *= a; // 40 80
	b /= a; // 40 2
	a %= b; // 0 2
	printf("a = %d , b = %d", a, b);
}
