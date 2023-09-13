/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:34:41 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/13 11:41:17 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(int nmemb, int size);
{

    int i;
    int j;
    void* dest; 

    i = nmemb * size;
    dest = malloc(nmemb * size);
    while (j < i)
        dest[i++] = 0;
    return dest;
}

int main()
{
    ft_calloc(10, 10);
}