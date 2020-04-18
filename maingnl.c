
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int			main(void)
{
	int		fd;
	int		ret;
	int		i;
	char	*line;

	fd = open("fd3.txt", O_RDONLY);
	i = 0;
	printf("test de lecture d'un file descriptor :\n\n");
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		printf("ret = %d, fd%d, l#%d ->%s|\n",ret, fd, i, line);
		free(line);
		i++;
	}
	printf("ret = %d, fd%d, l#%d ->%s|\n", ret, fd, i, line);
	free(line);
	printf("fin de lecture d'un file descriptor.\n");
	printf("\nTest de lecture sur l'entrée standard.\nTapez n'importe quoi au clavier\net faites CTRL + D pour arreter le test :\n\n");
	while ((ret = get_next_line(0, &line)) > 0)
	{
		printf("%s<- gnl, ret = %d.\n", line, ret);
		free(line);
		i++;
	}
	printf("%s<- gnl, ret = %d.\n\nArret du test.\n", line, ret);
	free(line);
	system("leaks res.out");
	return (1);
}

