/* Conv of hrs%mins to mins */
#include<stdio.h>
void main()
{
	// Variable Declaration
	int h, m, t;

	// Initialization
	h = 5;
	m = 12;
	
	// Calculation
	t = h*60+m;
	
	// Output
	printf("%d minute(s)", t);
	
}
