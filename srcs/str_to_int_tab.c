/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   str_to_int_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 15:27:18 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/13 19:07:14 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fdf.h"

static	unsigned int	add_word(t_fdf *env, char *ptr, t_point *res)
{
	unsigned int	index;
	char			*tmp;

	index = 0;
	while (ptr[index] != ' ' && ptr[index])
		index++;
	tmp = ft_strsub(ptr, 0, index);
	res->z = 3 * ft_atoi(tmp);
	res->z0 = res->z;
	free(tmp);
	env->min.z = (res->z < env->min.z ? res->z : env->min.z);
	env->max.z = (res->z > env->max.z ? res->z : env->max.z);
	while (ptr[index] && ptr[index] == ' ')
		index++;
	return (index);
}

t_point					*str_to_int_tab(t_fdf *env, char const *s)
{
	t_point	*res;
	char	*ptr;
	int		i_res;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	if (!(res = (t_point *)ft_memalloc(env->width * sizeof(t_point))))
		return (NULL);
	while (*ptr && *ptr == ' ')
		ptr++;
	i_res = 0;
	while (i_res < env->width)
	{
		ptr += add_word(env, ptr, res + i_res);
		i_res++;
	}
	return (res);
}
