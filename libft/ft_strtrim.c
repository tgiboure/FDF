/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:18:49 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:21:30 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int st;
	int en;

	if (!s)
		return (NULL);
	st = 0;
	while (s[st] && (s[st] == ' ' || s[st] == '\n' || s[st] == '\t'))
		st++;
	en = ft_strlen(s) - 1;
	if (en < 0)
		en = 0;
	while (en > st && (s[en] == ' ' || s[en] == '\n' || s[en] == '\t'))
		en--;
	return (ft_strsub(s, st, en - st + 1));
}
