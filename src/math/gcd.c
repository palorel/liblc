int gcd(int a, int b)
{
    int c = a;

    while (c)
    {
		c = a % b;
		a = b;
		b = c;
	} 
	return (a);
}