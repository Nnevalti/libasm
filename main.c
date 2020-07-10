
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

typedef	struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

void		ft_write(int fd, char *str, int len);
int			ft_read(int fd, void *buf, int buff_size);
int			ft_strlen(char *str);
char		*ft_strcpy(char *str1, char *str2);
int			ft_strcmp(char *str1, char *str2);
char		*ft_strdup(char *str1);
int			ft_list_size(t_list *list);
void		ft_list_push_front(t_list **list, void *data);

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
	int		fd;
	t_list	*list;
	t_list	*tmp;

	printf("/******FT_STRLEN******/\n");
	printf("%d\n", ft_strlen("Hello, World\n"));

	printf("/******FT_STRCPY******/\n");
	printf("%s\n", ft_strcpy(buf, "test"));

	printf("/******FT_WRITE******/\n");
	ft_write(1, "Hello, World\n", 13);
	ft_write(42, "Hello, World\n", 13);
	printf("%s\n", strerror(errno));
	ft_write(1, NULL, 13);
	printf("%s\n", strerror(errno));

	printf("/******FT_READ******/\n");
	fd = open("ft_read.s", O_RDONLY);
	res = ft_read(fd, buf, 16);
	printf("%d : %s\n", res, buf);
	res = ft_read(42, buf, 16);
	printf("%s\n", strerror(errno));
	res = ft_read(fd, NULL, 16);
	printf("%s\n", strerror(errno));

	printf("/******FT_STRCPY******/\n");
	printf("%d\n", ft_strcmp("Hello12", "Hello1"));
	printf("%d\n", strcmp("Hello12", "Hello1"));
	printf("%d\n", ft_strcmp("Hello12", "Hello123"));
	printf("%d\n", strcmp("Hello12", "Hello123"));
	printf("%d\n", ft_strcmp("Hello", "Hello"));
	printf("%d\n", strcmp("Hello", "Hello"));
	printf("%d\n", ft_strcmp("Hello12", ""));
	printf("%d\n", strcmp("Hello12", ""));
	printf("%d\n", ft_strcmp("", "Hello123"));
	printf("%d\n", strcmp("", "Hello123"));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", strcmp("", ""));

	printf("/******FT_STRDUP******/\n");
	printf("%s\n", ft_strdup("hello"));
	printf("%s\n", strdup("hello"));

	printf("/******FT_LIST_PUSH_FRONT******/\n");
	ft_list_push_front(&list, "!");
	printf("Called 1\n");
	ft_list_push_front(&list, "World");
	printf("Called 2\n");
	ft_list_push_front(&list, "Heeeelloooo");

	printf("/******FT_LIST_SIZE******/\n");
	res = ft_list_size(list);
	printf("%d\n", res);
	aff_list(list);
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	return (0);
}
