/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoini.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/18 12:44:19 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 12:44:19 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strjoini(char const *s1, char const *s2, int f)
{
	char	*to;

	if (!s1 || !s2)
		return (NULL);
	if (!(to = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	to = ft_strcat(to, s1);
	to = ft_strcat(to, s2);
	if (f == 1 || f == 3)
		free((void *)s1);
	if (f == 2 || f == 3)
		free((void *)s2);
	return (to);
}
