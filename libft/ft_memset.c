/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:14:04 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:20:45 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			indice;
	unsigned char	*ptr;

	ptr = (unsigned char*)b;
	indice = 0;
	while (indice < len)
	{
		ptr[indice] = (unsigned char)c;
		indice++;
	}
	return (b);
}
