/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:17:16 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:21:14 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	id;
	unsigned int	is;

	id = 0;
	while (dst[id] && id < size)
		id++;
	if (id == size)
		return (size + ft_strlen(src));
	is = 0;
	while ((id + is) < size - 1 && src[is])
	{
		dst[id + is] = src[is];
		is++;
	}
	dst[id + is] = '\0';
	return (id + ft_strlen(src));
}
