#ifndef LC_MVECTOR_H
#define LC_MVECTOR_H

typedef struct	s_mvector
{
	int			x;
	int			y;
} 				t_mvector;

double			lc_mv_cos(t_mvector *s1, t_mvector *s2);
double			lc_mv_size(t_mvector *s1);
double			lc_mv_scalar_product(t_mvector *s1, t_mvector *s2);
t_mvector		lc_mv_sum(t_mvector *s1, t_mvector *s2);
t_mvector		lc_mv_sub(t_mvector *s1, t_mvector *s2);

#endif
