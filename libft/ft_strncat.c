/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:17:43 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:21:20 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = ft_strlen(s1);
	i2 = 0;
	while (i2 < n && s2[i2])
	{
		s1[i1] = s2[i2];
		i1++;
		i2++;
	}
	s1[i1] = 0;
	return (s1);
}
