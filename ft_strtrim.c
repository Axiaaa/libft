/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:56:40 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/11 16:48:32 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

static int ft_is_set(char c, char set)
{
    return (c == set);
}

char *ft_trim(char const *s1, char const set) 
{
    int len = 0;
    int i = 0;
    int j = 0;
    char *str;

    while (s1[j])
        j++;
    while (s1[i] && ft_is_set(s1[i], set))
    	i++;
    j -= 1;
    while (j >= 0 && ft_is_set(s1[j], set))
        j--;
    str = malloc(sizeof(char) * (j - i + 1));
    while (i <= j)
        str[len++] = s1[i++];
    str[len] = '\0';
    return (str);
}

int main()
{
    char *str = "aaaJe suis une fluteaaa";
    char set = 'a';
    printf("%s", ft_trim(str, set));
}