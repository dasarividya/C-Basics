/* Minutes into hours 7 minutes */
#include<stdio.h>
void main()
{
	int a, h, m;
	
	a= 550;
	
	h= a/60;
	m= a%60;
	
	printf("Minutes= %d\n%d hours(s) %d minutes(s)", a, h, m);
}
