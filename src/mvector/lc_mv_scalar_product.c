#include <stdlib.h>
#include <stdio.h>

#include "lc_mvector.h"

double lc_mv_scalar_product(t_mvector *s1, t_mvector *s2) 
{
	return (s1 && s2 ? s1->x * s2->x + s1->y * s2->y : 0);
}
