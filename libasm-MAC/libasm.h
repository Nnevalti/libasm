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

#ifndef	LIBASM_H
# define LIBASM_H
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <errno.h>
# include <unistd.h>


int			ft_write(int fd, char *str, int len);
int			ft_read(int fd, void *buf, int buff_size);
int			ft_strlen(char *str);
char		*ft_strcpy(char *str1, char *str2);
int			ft_strcmp(char *str1, char *str2);
char		*ft_strdup(char *str1);

#endif
