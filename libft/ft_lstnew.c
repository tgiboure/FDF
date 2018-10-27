/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:13:00 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:20:26 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *elem;

	elem = (t_list*)ft_memalloc(sizeof(t_list));
	if (!elem || !content)
		return (elem);
	elem->content = ft_memalloc(content_size);
	if (!elem->content)
		return (elem);
	elem->content = ft_memcpy(elem->content, content, content_size);
	elem->content_size = content_size;
	return (elem);
}
