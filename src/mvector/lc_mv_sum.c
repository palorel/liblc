#include "lc_mvector.h"

t_mvector lc_mv_sum(t_mvector *s1, t_mvector *s2)
{
	t_mvector s3 = { .x = 0, .y = 0};
    if (s1 && s2)
    {
		s3.x = s1->x + s2->x;
		s3.y = s1->y + s2->y;
	}
    return (s3);
}