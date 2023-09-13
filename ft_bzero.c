/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:54:50 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/11 13:54:50 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    size_t i = 0;
    
    while (i < n)
        ptr[i++] = '\0';
}
