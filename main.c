#include "libft.h"
#include <fcntl.h>

int main(void)
{
	int fd;

	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd('A', fd);
	close(fd);
	return (0);
}
