/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:38:39 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/13 11:38:43 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr(const char * string, char searchedChar )
{
    int i;

    i = 0;

    while (string[i])
        i++;
    while (i >= 0)
    {
        if (string[--i] == searchedChar)
            return &string[i];
    }
    return (char *)0;
}
