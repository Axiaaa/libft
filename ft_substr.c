#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{

	char *dest;
	int i;

	i = 0;
	dest = malloc(sizeof(char) * (len + 1));
	while ((s[start] != '\0') && (i < (int)len))
		dest[i++] = s[start++];
	dest[++i] = '\0';
	return (dest);
}
/*
int main()
{
	#include <stdio.h>
	printf("%s", ft_substr("Je suis une flute", 8, 5));
}*/
