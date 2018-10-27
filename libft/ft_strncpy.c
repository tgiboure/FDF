/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:17:56 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:21:22 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	index;

	index = 0;
	while (index < len && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	while (index < len)
		dst[index++] = 0;
	return (dst);
}
