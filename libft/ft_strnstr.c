/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:18:17 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:21:25 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	if (!little[j])
		return ((char *)big);
	while ((i + j) < len && big[i])
	{
		while ((i + j) < len && big[i + j] == little[j])
		{
			j++;
			if (!little[j])
				return ((char *)(big + i));
		}
		j = 0;
		i++;
	}
	return (NULL);
}
