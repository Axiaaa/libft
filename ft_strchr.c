/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:39:45 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/13 11:39:47 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *strchr(const char * string, char searchedChar )
{
    int i;

    i = -1;

    while (string[i])
        if (string[++i] == searchedChar)
            return string[i];
    return (char *)0;
}