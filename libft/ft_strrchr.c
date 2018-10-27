/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:18:24 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:20:12 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*pos;

	ptr = (char *)s;
	pos = NULL;
	while (*ptr)
	{
		if (*ptr == (char)c)
			pos = ptr;
		ptr++;
	}
	if (*ptr == (char)c)
		return (ptr);
	return (pos);
}
