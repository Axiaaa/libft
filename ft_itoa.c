/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:55:09 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/11 14:23:53 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	char	*ft_case_zero(char *dest)
{
	dest[0] = '0';
	dest[1] = '\0';
	return (dest);
}

static	char	*tab_writing(int nb, unsigned int n, int index, char *dest)
{
	if (nb < 0)
		dest[0] = '-';
	dest[index--] = '\0';
	while (n > 9)
	{
		dest[index--] = n % 10 + '0';
		n = n / 10;
	}
	dest[index] = n % 10 + '0';
	return (dest);
}

char	*ft_itoa(int nb)
{
	unsigned int	nb_count;
	int				i;
	unsigned int	n;
	char			*dest;

	i = 1;
	if (nb == 0)
		return (ft_case_zero(dest = malloc(sizeof(char) * 2)));
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
	dest = malloc(sizeof(char) * (i + 1));
	return (tab_writing(nb, n, i, dest));
}

int	main(void)
{
	#include <stdio.h>
	for (int i = 0; i < 14567890; i + i + 1)
		printf("%s\n", ft_itoa(i));

}
