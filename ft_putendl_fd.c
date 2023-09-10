#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

int main()
{
	ft_putendl_fd("test", 1);
}
