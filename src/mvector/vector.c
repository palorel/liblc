#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "lc_mvector.h"

int main()
{
	float size_1 = 0;
	int scalar_product = 0;
	float size_2 = 0;
	float cos = 0;
	float square = 0;
	
	tm_vector s1;
	tm_vector s2;
	scanf("%d %d", &s1.x, &s1.y);
	scanf("%d %d", &s2.x, &s2.y);
	size_1 = s1.x * s1.x + s1.y * s1.y;
	size_1 = sqrt(size_1);
	printf("Длинна 1 вектора - ");
	printf("%lf\n", size_1);

	size_2 = s2.x * s2.y + s2.y * s2.y;
	size_2 = sqrt(size_2);
	printf("Длинна 2 вектора - ");
	printf("%lf\n", size_2);

	scalar_product = s1.x * s2.x + s1.y * s2.y;
	printf("Скалярное произведение - ");
	printf("%d\n", scalar_product);

	cos = scalar_product / (size_1 * size_2);
	printf("Косинус между векторами - ");
	printf("%lf\n", cos);

	square = size_1 * size_2 * cos;
	printf("Площадь паралелограмма между векторами");
	printf("%lf", square);	
	return(0); 	

}
