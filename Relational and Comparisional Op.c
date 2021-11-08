/* Relational and Comparisional Operators */
#include<stdio.h>
void main()
{
	int a,b;
	
	a= 40;
	b= 20;
	
	printf("a = %d\nb = %d\n", a,b);
	printf("%d > %d --> %d\n", a, b, a>b);
	printf("%d < %d --> %d\n", a, b, a<b);
	printf("%d >= %d --> %d\n", a, b, a>=b);
	printf("%d <= %d --> %d\n", a, b, a<=b);
	printf("%d == %d --> %d\n", a, b, a==b);
	printf("%d != %d --> %d\n", a, b, a!=b);
}
