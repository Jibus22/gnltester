
#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int			main(void)
{
	int		fd;
	int		fd3;
	int		fd4;
	int		fd5;
	int		fd6;
	int		fd7;
	int		ret;
	int		i;
	int		out;
	char	*line;

	fd = 3;
	fd3 = open("fd3.txt", O_RDONLY);
	fd4 = open("fd4.txt", O_RDONLY);
	fd5 = open("fd5.txt", O_RDONLY);
	fd6 = open("fd6.txt", O_RDONLY);
	fd7 = open("fd7.txt", O_RDONLY);
	i = 0;
	out = 1;
	while (out)
	{
		if ((ret = get_next_line(fd, &line)) == 0 && fd == 7)
			out = 0;
		printf("r:%d, fd%d, l#%d ->%s|\n",ret, fd, i, line);
		free(line);
		if ((fd++ % 10) == 7)
		{
			fd = 3;
			i++;
		}
	}
//	system("leaks test");
	return (1);
}
