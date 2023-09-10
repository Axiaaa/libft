#include <stdlib.h>

char *ft_strdup(char *str)
{
	int len;
	int i;	
	char *dest;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

