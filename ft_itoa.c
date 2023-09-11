#include <stdlib.h>

static char	*ft_case_zero(char *dest)
{
	dest = malloc(sizeof(char) * 2);
	dest[0] = '0';
	dest[1] = '\0';
	return (dest);
}

char	*ft_itoa(int nb)
{
	unsigned int	nb_count;
	int				i;
	unsigned int	n;
	char			*dest;

	i = 0;
	if (nb == 0)
		return (ft_case_zero(dest));
	if (nb < 0)
	{
		i++;
		n = -nb;
	}
	else
		n = nb;
	nb_count = n;
	while (nb_count > 9)
	{
		nb_count = nb_count / 10;
		i++;
	}
	i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (nb < 0)
		dest[0] = '-';
	dest[i--] = '\0';
	while (n > 9)
	{
		dest[i--] = n % 10 + '0';
		n = n / 10;
	}
	dest[i] = n % 10 + '0';
	return (dest);
}

int	main(void)
{
	// Test with error cases
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(-1));
}