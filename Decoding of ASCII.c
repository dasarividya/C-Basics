/* Decoding of ASCII characters */
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d", &a,&b,&c);
	printf("Corresponding ASCII characters are: %c %c %c ", a+24, b-20, c+10);
}
