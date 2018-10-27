/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstpushback.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:13:06 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:20:27 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstpushback(t_list **alst, t_list *elem)
{
	t_list *lst;

	if (!alst || !elem)
		return ;
	if (!*alst)
	{
		*alst = elem;
		return ;
	}
	lst = *alst;
	while (lst->next)
		lst = lst->next;
	lst->next = elem;
}
