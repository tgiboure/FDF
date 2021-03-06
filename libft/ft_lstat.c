/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstat.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/18 12:44:08 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 12:44:08 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list *lst, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
