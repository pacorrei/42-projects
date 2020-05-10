#include "get_next_line.h"
#include <fcntl.h>

int	main(int ac, char **av)
{
	int fd;
	int res;
	char *line;

	fd = open(av[1], O_RDONLY);
	res = 0;
	line = NULL;
	while ((res = get_next_line(fd, &line)) > 0)
	{
		printf("%d", res);
		printf("%s\n", line);
		free(line);
	}
	printf("%d", res);
	printf("%s\n", line);
	free(line);
}
