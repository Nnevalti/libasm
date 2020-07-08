
#include <stdio.h>
void	start(void);
void	ft_write(int fd, char *str, int len);
int		ft_strlen(char *str);
char	*ft_strcpy(char *str1, char *str2);

int		main()
{
	char *str;

	printf("%d\n", ft_strlen("Hello, World\n"));
	ft_write(1, "Hello, World\n", 13);
	printf("%s\n", ft_strcpy("test", str));
	return (0);
}
