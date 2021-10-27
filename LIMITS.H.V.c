#include<stdio.h>
#include<limits.h>
void main()
{
	printf("Short Int:\nSigned: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf("Unsigned: %d to %hu\n", 0, SHRT_MAX);
	printf("Int:\nSigned: %d to %d\n", INT_MIN, INT_MAX);
	printf("Unsigned: %d to %u\n", 0, INT_MAX);
	printf("Long Int:\nSigned: %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("Unsigned: %d to %lu\n", 0, LONG_MAX);
	printf("Long Long Int:\nSigned: %lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
	printf("Unsigned: %d to %llu", 0, LONG_LONG_MAX);
	
}
