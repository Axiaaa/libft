/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:55:39 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/13 11:42:31 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_sep(char c, char charset)
{
	return (c == charset);
}

static int	ft_len_word(const char *str, char charset)
{
	int	len;

	len = 0;
	while ((str[len]) && (!(ft_is_sep(str[len], charset))))
		len++;
	return (len + 1);
}

static int	ft_len_tab(const char *str, char charset)
{
	int	x;
	int	words;

	x = 0;
	words = 0;
	while (str[x])
	{
		while (str[x] && ft_is_sep(str[x], charset))
			x++;
		if (str[x])
			words++;
		while (str[x] && (!(ft_is_sep(str[x], charset))))
			x++;
	}
	return (words);
}

static void	ft_write_word(char **tab, const char *str, char charset)
{
	int	len_tab;

	int x, y, z;
	x = 0, y = 0;
	len_tab = ft_len_tab(str, charset);
	while (y < len_tab)
	{
		while ((str[x]) && (ft_is_sep(str[x], charset)))
			x++;
		if (str[x] && (!(ft_is_sep(str[x], charset))))
			tab[y] = malloc(sizeof(char) * (ft_len_word((str + x), charset)));
		if (!(tab[y]))
			return ;
		z = 0;
		while ((str[x]) && (!(ft_is_sep(str[x], charset))))
			tab[y][z++] = str[x++];
		tab[y][z] = '\0';
		y++;
	}
	tab[y] = (void *)0;
}

char	**ft_split(char const *str, char charset)
{
	char	**tab;

	tab = malloc(sizeof(char *) * (ft_len_tab(str, charset) + 1));
	if (!(tab))
		return (0);
	ft_write_word(tab, str, charset);
	return (tab);
}

/*
int	main(void)
{
	char	**tab;
	int		c;
	tab = ft_split("   j'aime les      pates sucrées au sucres      ", ' ');
	c = 0;
	while (tab[c])
		printf("%s\n", tab[c++]);
}*/
