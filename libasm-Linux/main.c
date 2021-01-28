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

int			main(void)
{
	int		res;
	char	buf[33];
	char	*dup;
	int		fd;

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
	printf("ft_strcpy : \"test\" in buf\n");
	printf("buf : %s\n", ft_strcpy(buf, "test"));
	printf("strcpy : \"test\" in buf\n");
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
	printf("write : Hello_world\\n\n");
	res = write(1, "Hello, World\n", 13);
	printf("return value of ft_write : %d\n", res);
	

	printf("\nTest error with wrong fd : (ft_write)\n");
	ft_write(42, "Hello, World\n", 13);
	printf("%s\n", strerror(errno));
	printf("\nTest error with wrong fd : (write)\n");
	write(42, "Hello, World\n", 13);
	printf("%s\n", strerror(errno));

	
	printf("\nTest error with NULL char : (ft_write)\n");
	ft_write(1, NULL, 13);
	printf("%s\n", strerror(errno));
	printf("\nTest error with NULL char : (write)\n");
	write(1, NULL, 13);
	printf("%s\n", strerror(errno));


	printf("\033[1;33m");
	printf("/******FT_READ******/\n");
	printf("\033[0m");
	fd = open("ft_read.s", O_RDONLY);

	res = ft_read(fd, buf, 32);
	buf[32] = 0;
	printf("ft_read res = %d :\n%s\n", res, buf);
	res = read(fd, buf, 32);
	buf[32] = 0;
	printf("read res = %d :\n%s\n", res, buf);

	printf("\nTest error with wrong fd : \n");
	res = ft_read(42, buf, 32);
	printf("ft_read : %s\nerrno : %d\n", strerror(errno), errno);
	res = read(42, buf, 32);
	printf("read : %s\nerrno : %d\n", strerror(errno), errno);

	printf("\nTest error with NULL char : \n");
	res = ft_read(fd, NULL, 32);
	printf("ft_read :\n%s\n", strerror(errno));
	res = read(fd, NULL, 32);
	printf("read :\n%s\n", strerror(errno));

	
	printf("\033[1;33m");
	printf("/******FT_STRDUP******/\n");
	printf("\033[0m");
	printf("dup = %s\n", dup);
	printf("strdup : %s\n", strdup(dup));
	printf("ft_strdup : %s\n", ft_strdup(dup));
}
