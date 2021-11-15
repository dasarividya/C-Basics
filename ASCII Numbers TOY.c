/* Decoding the numbers using the ASCII */
#include<stdio.h>
void main()
{
	char a,b,c;
	printf("Enter three characters");
	scanf("%c %c %c", &a,&b,&c);
	printf("Corresponding ASCII numbers for %c %c %c is: %d %d %d", a+24, b-20, c+10);
}
