#include <stdio.h>
#include <stdlib.h>

#include "lc_mvector.h"

double lc_mv_cos(t_mvector *s1, t_mvector *s2)
{
	return (s1 && s2 ? lc_mv_scalar_product(s1, s2) / (lc_mv_size(s1) * lc_mv_size(s2)) : 0);
}
