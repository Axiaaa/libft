/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:55:54 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/13 12:16:19 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	int i;
	int j;
	int k;
	char *dest;	
	

	i = 0;
	j = 0;
	k = -1;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	dest = malloc(sizeof(char) * (i + j + 1));
	i = -1;
	j = -1;
	while (s1[++i])
		dest[++k] = s1[i];
	while (s2[++j])
		dest[++k] = s2[j];
	dest[++k] = '\0';
	return (dest);
}

/*
int main(int ac, char **av)
{	
	if (ac == 3)
		printf("%s", ft_strjoin(av[1], av[2]));
}*/
