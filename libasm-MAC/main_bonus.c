/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <vdescham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:06:15 by vdescham          #+#    #+#             */
/*   Updated: 2020/07/14 13:06:16 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm_bonus.h"

void aff_list(t_list *list)
{
	while (list)
	{
		printf("%s -> ",(char *)list->data);
		list = list->next;
	}
	printf("NULL\n");
}

int			main(void)
{
	int	res;
	t_list	*list;
	t_list	*tmp;

	list = NULL; // init t_list to NULL pointer

	printf("/******BONUS******/\n");
	printf("\033[0m");

	printf("\033[1;33m");
	printf("/******FT_LIST_PUSH_FRONT******/\n");
	printf("\033[0m");
	printf("Called 1 : added : !\n");
	ft_list_push_front(&list, "!");
	printf("Called 2 : added : World\n");
	ft_list_push_front(&list, "World");
	printf("Called 3 : added : Heeeelloooo\n");
	ft_list_push_front(&list, "Heeeelloooo");

	printf("\033[1;33m");
	printf("/******FT_LIST_SIZE******/\n");
	printf("\033[0m");
	res = ft_list_size(list);
	printf("list length is %d\n", res);

	printf("\033[1;33m");
	printf("/******Display the list******/\n");
	printf("\033[0m");	aff_list(list);
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	return (0);
}
