/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:56:37 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/13 11:38:25 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (len + 1));
	while ((s[start] != '\0') && (i < (int)len))
		dest[i++] = s[start++];
	dest[++i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	#include <stdio.h>
	printf("%s", ft_substr("Je suis une flute", 8, 5));
}*/
