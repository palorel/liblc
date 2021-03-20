#include "liblc.h"

#include <stdio.h>

// first divisor

int gcd(int a, int b)
{
    int c = a;

    while (c)
    c = a % b;
    a = b;
    b = c; 
	return (a);
}

int main(int argc, char **argv)
{

	return 0;
}
