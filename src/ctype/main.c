#include <stdio.h>
#include <ctype.h>

int lc_isascii(int c);

int main()
{
	int c = 0;

	scanf ("%d", &c);
	printf("%d\n", c);
	printf("%d\n", lc_isascii(c));
	return (0);
}
