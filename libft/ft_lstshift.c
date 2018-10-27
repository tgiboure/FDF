/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstshift.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:13:12 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:20:29 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstshift(t_list **alst, void (*del)(void **))
{
	t_list *lst;

	if (!alst || !del || !*alst)
		return ;
	lst = (*alst)->next;
	del(&((*alst)->content));
	del((void **)alst);
	*alst = lst;
}
