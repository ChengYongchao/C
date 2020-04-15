#include<stdio.h>
#include <limits.h>
int q2_1(int argc, char const* argv[])
{
	printf("signed char 2^8: %d ~ %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned 2^8: %d ~ %d\n", 0, SCHAR_MAX);
	printf("signed short 2^16£º %d ~ %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short 2^16£º %d ~ %d\n", 0, USHRT_MAX);
	printf("signed int 2^32£º %d ~ %d\n", INT_MIN, INT_MIN);
	printf("unsigned int 2^32£º %d ~ %f\n", 0, UINT_MAX);
	printf("signed long 2^32£º %d ~ %d\n", LONG_MIN, LONG_MAX);
	printf("unsigned short 2^32£º %d ~ %d\n", 0, ULONG_MAX);
	return 0;
}