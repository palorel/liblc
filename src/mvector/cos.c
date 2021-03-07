#include <stdio.h>
#include <stdlib.h>
#include "lc_mvector.h"

double cos(t_mvector *s1, t_mvector *s2)
{
	return (s1 && s2 ? scalar_product(s1, s2) / (size_vector(s1) * size_vector(s2)) : 0);
}
