/* Logicaal Opetrators */
#include<stdio.h>
void main()
{
	int a,b,c;
	
	a= 80;
	b=60;
	c=40;
	
	printf("Logical AND\n(%d<%d) && (%d<%d)-->%d\n", a,b,a,c,(a>b)&&(a>c));
    printf("(%d<%d) && (%d<%d)-->%d\n", a,b,a,c,(a>b)&&(a<c));
    printf("(%d<%d) && (%d<%d)-->%d\n", a,b,a,c,(a<b)&&(a<c));
    printf("Logical OR\n(%d<%d) || (%d<%d)-->%d\n", a,b,a,c,(a>b)||(a>c));
    printf("(%d<%d) || (%d<%d)-->%d\n", a,b,a,c,(a>b)||(a<c));
    printf("(%d<%d) || (%d<%d)-->%d\n", a,b,a,c,(a<b)||(a<c));
    
}
