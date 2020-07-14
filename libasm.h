/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <vdescham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:07:30 by vdescham          #+#    #+#             */
/*   Updated: 2020/07/14 13:07:32 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MLX_H
# define MLX_H
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <errno.h>

typedef	struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

int			ft_write(int fd, char *str, int len);
int			ft_read(int fd, void *buf, int buff_size);
int			ft_strlen(char *str);
char		*ft_strcpy(char *str1, char *str2);
int			ft_strcmp(char *str1, char *str2);
char		*ft_strdup(char *str1);
int			ft_list_size(t_list *list);
void		ft_list_push_front(t_list **list, void *data);

#endif
