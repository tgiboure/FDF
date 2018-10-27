/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   centering.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 12:39:27 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/13 19:07:55 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	set_max(t_fdf *deb, int x, int y)
{
	t_point		a;

	a = deb->tab[y][x];
	deb->min.x = (a.x < deb->min.x ? a.x : deb->min.x);
	deb->max.x = (a.x > deb->max.x ? a.x : deb->max.x);
	deb->min.y = (a.y < deb->min.y ? a.y : deb->min.y);
	deb->max.y = (a.y > deb->max.y ? a.y : deb->max.y);
}

void	set_deltas(t_fdf *deb)
{
	int w;
	int h;

	w = (W_WIDTH) / deb->width;
	h = (W_HEIGHT) / deb->height;
	deb->d = (w <= h ? w : h);
}

void	set_start(t_fdf *deb)
{
	deb->x0 = abs(deb->min.x) + (W_WIDTH - (deb->max.x - deb->min.x)) / 2;
	deb->y0 = (W_HEIGHT - (deb->max.y - deb->min.y)) / 3;
}
