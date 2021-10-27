#include<stdio.h>
#include<limits.h>
void main()
{
	printf("Long Long Int:\nSigned: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
	printf("Unsigned: %d to %llu\n", 0, ULLONG_MAX);
}
