/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:56:40 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/11 13:56:58 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_is_set(char c, char set)
{
	int i;

	i = 0;
    if (set == c)
        return 0;
	return 1;
}



char *ft_trim(char const *s1, char const set) 
{
    int len = 0;
    int i = 0;
    char *str;

    while (s1[i] && ft_is_set(s1[i], set))
    	i++;
    while (s1[i] && (!(ft_is_set(s1[i], set))))
    {
        str[len] = s1[i];
        len++;
        i++;
    }
    str[len] = '\0';  
    return str;
}

int main()
{
    char *str = "Je suis une flute";
    char set = ' ';
    printf("%s", ft_trim(str, set));
}