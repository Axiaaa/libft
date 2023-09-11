/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:10:49 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/11 13:56:52 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(src);
	j = 0;
	if (i + 1 < size)
	{
		while (j < i + 1)
		{
			dest[j] = src[j];
			j++;
		}
	}
	else
	{
		while (j + 1 < size)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
/*
int	main()
{
	char source[] = "hello world";
	char dest[25];

	printf("%d", ft_strlcpy(dest, source, 15));
	printf("%s", dest);
}*/
