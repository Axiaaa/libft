/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:38:39 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/14 17:54:36 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return ((char *)0);
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[--i] == c)
			return ((char *)&s[i]);
	}
	return ((char *)0);
}
