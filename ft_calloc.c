/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:34:41 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/13 12:25:16 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{

    int i;
    int j;
    int* dest; 

    j = 0;
    i = nmemb * size;
    dest = malloc(nmemb * size);
    while (j < i)
        dest[j++] = 0;
    return dest;
}

int main()
{
    ft_calloc(10, 10);
}