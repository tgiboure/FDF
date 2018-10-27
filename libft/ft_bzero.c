/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 17:43:14 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 17:44:11 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		indice;
	char		*str;

	indice = 0;
	str = (char*)s;
	while (indice < n)
	{
		str[indice] = 0;
		indice++;
	}
}
