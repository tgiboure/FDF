/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: togibour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 18:19:42 by togibour     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/05 18:21:38 by togibour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# define BUFF_SIZE 32

typedef struct				s_fbuffer
{
	int						fd;
	char					*data;
}							t_fbuffer;

int							get_next_line(const int fd, char **line);

#endif
