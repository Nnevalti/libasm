/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <vdescham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:07:30 by vdescham          #+#    #+#             */
/*   Updated: 2020/07/14 13:07:32 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBASM_BONUS_H
# define LIBASM_BONUS_H
# include <stdio.h>
# include <stdlib.h>

typedef	struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

int		ft_list_size(t_list *list);
void		ft_list_push_front(t_list **list, void *data);

#endif
