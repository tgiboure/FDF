/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:18:37 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:21:28 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char			*ptrb;
	unsigned int	il;

	ptrb = (char *)big;
	il = 0;
	if (!*little)
		return (ptrb);
	while (*ptrb)
	{
		if (!little[il])
			return (ptrb);
		else if (little[il] == *(ptrb + il))
			il++;
		else if (little[il] != *(ptrb + il))
		{
			il = 0;
			ptrb++;
		}
	}
	return (NULL);
}
