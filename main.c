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

#include "libasm.h"

void aff_list(t_list *list)
{
	while (list)
	{
		printf("%s -> ",list->data);
		list = list->next;
	}
	printf("NULL\n");
}
int			main(void)
{
	char	*str;
	int		res;
	char	buf[32];
	char	*dup;
	int		fd;
	t_list	*list;
	t_list	*tmp;

	list = NULL; // init t_list to NULL pointer
	dup = "Megalovania";

	printf("\033[1;33m");
	printf("/******FT_STRLEN******/\n");
	printf("\033[0m");
	printf("ft_strlen : \"Hello, World\\n\"\n");
	printf("Return value : %d\n", ft_strlen("Hello, World\n"));
	printf("strlen : \"Hello, World\\n\"\n");
	printf("Return value : %lu\n", strlen("Hello, World\n"));

	printf("\033[1;33m");
	printf("/******FT_STRCPY******/\n");
	printf("\033[0m");
	printf("ft_strcpy : buf, \"test\"\n");
	printf("buf : %s\n", ft_strcpy(buf, "test"));
	printf("strcpy : buf, \"test\"\n");
	printf("buf : %s\n", strcpy(buf, "test"));

	printf("\033[1;33m");
	printf("/******FT_STRCMP******/\n");
	printf("\033[0m");
	printf("ft_strcmp : Hello12, Hello1\n");
	printf("%d\n", ft_strcmp("Hello12", "Hello1"));
	printf("strcmp : Hello12, Hello1\n");
	printf("%d\n", strcmp("Hello12", "Hello1"));

	printf("ft_strcmp : Hello12, Hello123\n");
	printf("%d\n", ft_strcmp("Hello12", "Hello123"));
	printf("strcmp : Hello12, Hello123\n");
	printf("%d\n", strcmp("Hello12", "Hello123"));

	printf("ft_strcmp : Hello, Hello\n");
	printf("%d\n", ft_strcmp("Hello", "Hello"));
	printf("strcmp : Hello, Hello\n");
	printf("%d\n", strcmp("Hello", "Hello"));

	printf("ft_strcmp : Hello12, \"\"\n");
	printf("%d\n", ft_strcmp("Hello12", ""));
	printf("strcmp : Hello12, \"\"\n");
	printf("%d\n", strcmp("Hello12", ""));

	printf("ft_strcmp : \"\", Hello123\n");
	printf("%d\n", ft_strcmp("", "Hello123"));
	printf("strcmp : \"\", Hello123\n");
	printf("%d\n", strcmp("", "Hello123"));

	printf("ft_strcmp : \"\", \"\"\n");
	printf("%d\n", ft_strcmp("", ""));
	printf("strcmp : \"\", \"\"\n");
	printf("%d\n", strcmp("", ""));

	printf("\033[1;33m");
	printf("/******FT_WRITE******/\n");
	printf("\033[0m");
	printf("ft_write : Hello_world\\n\n");
	res = ft_write(1, "Hello, World\n", 13);
	printf("return value of ft_write : %d\n", res);
	printf("\nTest error with wrong fd : \n");
	ft_write(42, "Hello, World\n", 13);
	printf("%s\n", strerror(errno));
	printf("\nTest error with NULL char : \n");
	ft_write(1, NULL, 13);
	printf("%s\n", strerror(errno));

	printf("\033[1;33m");
	printf("/******FT_READ******/\n");
	printf("\033[0m");
	fd = open("ft_read.s", O_RDONLY);
	res = ft_read(fd, buf, 16);
	printf("%d : %s\n", res, buf);

	printf("\nTest error with wrong fd : \n");
	res = ft_read(42, buf, 16);
	printf("%s\n", strerror(errno));

	printf("\nTest error with NULL char : \n");
	res = ft_read(fd, NULL, 16);
	printf("%s\n", strerror(errno));

	printf("\033[1;33m");
	printf("/******FT_STRDUP******/\n");
	printf("\033[0m");
	printf("dup : %s\n", dup);
	printf("ft_strdup : %s\n", ft_strdup(dup));
	printf("strdup : %s\n", strdup(dup));

	printf("\n");
	printf("\033[1;36m");
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
