/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:33:33 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/14 11:22:40 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *ptr_src;
    unsigned char *ptr_dest;
    

    dest = malloc(n);
    ptr_dest = dest;
    ptr_src = src;
    i = 0;

    while (i < n)
    {
        *ptr_dest = *ptr_src;
        i++;
        ptr_dest++;
        ptr_src++;
    }
    return (dest);
}