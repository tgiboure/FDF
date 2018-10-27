/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 17:43:52 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 17:44:21 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ln_int(unsigned int n)
{
	if (n < 10)
		return (1);
	return (1 + ln_int(n / 10));
}

char					*ft_itoa(int n)
{
	char			*res;
	unsigned int	nb;
	unsigned int	first;
	unsigned int	size;

	nb = (n < 0 ? -n : n);
	size = ln_int(nb) + (n < 0 ? 1 : 0);
	res = ft_strnew(size);
	if (!res)
		return (NULL);
	first = 0;
	if (n < 0)
		res[first++] = '-';
	while (first < size)
	{
		res[--size] = nb % 10 + '0';
		nb /= 10;
	}
	return (res);
}
