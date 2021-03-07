#include <math.h>
#include "lc_mvector.h"

double lc_mv_size(t_mvector *s1)
{
	return (s1 ? sqrt(s1->x * s1->x + s1->y * s1->y) : 0);
}
