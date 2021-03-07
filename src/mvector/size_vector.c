#include <stdlib.h>
#include <stdio.h>
#include "lc_mvector.h"

double size_vector(t_mvector *s1)
{
	return (s1 ? sqrt(s1->x * s1->x + s1->y * s1->y) : 0);
}
