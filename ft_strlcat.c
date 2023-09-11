/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:53:30 by lcamerly          #+#    #+#             */
/*   Updated: 2023/08/15 12:33:41 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (i < size && dest[i] != '\0')
	{
		i++;
	}
	j = ft_strlen(src);
	k = 0;
	if (size == 0 || i == size)
		return (j + i);
	while (src[k] && i + 1 + k < size)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}


int main()
{	
	char s1[] = "Prout";
	char s2[] = "Crout";
	ft_strlcat(s1, s2, 11);
	printf("%s\n", s1);
}