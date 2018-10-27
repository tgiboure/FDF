/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:16:45 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:21:07 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*res;
	unsigned int	index;

	res = ft_strnew(ft_strlen(s1));
	if (!res)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		res[index] = s1[index];
		index++;
	}
	return (res);
}
