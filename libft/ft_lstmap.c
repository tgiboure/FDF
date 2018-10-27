/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:12:52 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:20:25 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *content, size_t content_size)
{
	ft_memset(content, 0, content_size);
	free(content);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *begin;
	t_list *new;
	t_list *temp;

	if (!lst || !f || !(temp = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	temp = f(temp);
	begin = temp;
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(lst->content, lst->content_size);
		if (!new)
		{
			ft_lstdel(&begin, del);
			return (NULL);
		}
		new = f(new);
		temp->next = new;
		temp = temp->next;
		lst = lst->next;
	}
	return (begin);
}
