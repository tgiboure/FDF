/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   checkfile.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 12:41:59 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/13 19:02:52 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fdf.h"

static int	nb_numbers(char *ptr)
{
	unsigned int nbnum;

	nbnum = 0;
	while (*ptr)
	{
		if (*ptr != ' ')
		{
			while (*ptr && *ptr != ' ')
				ptr++;
			nbnum++;
		}
		else
			ptr++;
	}
	return (nbnum);
}

static int	get_dimensions(t_fdf *env)
{
	int		ret;
	int		i;
	char	*line;

	if ((env->fd = open(env->filename, O_RDONLY)) < 0)
		return (0);
	i = 0;
	while (++i && (ret = get_next_line(env->fd, &line)) > 0)
	{
		if (i == 1)
			env->width = nb_numbers(line);
		else if (nb_numbers(line) != env->width)
			close(env->fd);
		env->height++;
		ft_strdel(&line);
	}
	if (ret <= 0)
		close(env->fd);
	if (!ret)
		ft_strdel(&line);
	return (ret < 0 || (!ret && !env->width) ? 0 : 1);
}

static int	file_to_tab(t_fdf *env)
{
	int		index;
	char	*line;
	int		ret;

	if ((env->fd = open(env->filename, O_RDONLY)) < 0)
		return (0);
	index = 0;
	while ((ret = get_next_line(env->fd, &line) > 0)
			&& (env->tab[index] = str_to_int_tab(env, line)))
	{
		index++;
		ft_strdel(&line);
	}
	ft_strdel(&line);
	close(env->fd);
	if (index == env->height && !ret)
		return (1);
	while (index--)
		ft_memdel((void **)&(env->tab[index]));
	ft_memdel((void **)&(env->tab));
	free_tab(env);
	return (0);
}

int			check_file(t_fdf *env)
{
	int		h;

	if (!get_dimensions(env))
	{
		ft_putendl_fd("the file is not structured correctly.", 2);
		return (0);
	}
	h = env->height;
	if (!(env->tab = (t_point **)ft_memalloc((h + 1) * sizeof(t_point *)))
			|| !file_to_tab(env))
	{
		ft_putendl_fd("problem while storing the file.", 2);
		free_tab(env);
		free(env);
		return (0);
	}
	return (1);
}
