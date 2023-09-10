#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}



int main()
{
	ft_putstr_fd("test", 1);
}
