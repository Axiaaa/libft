/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:22:45 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/16 14:40:48 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/Nephtys/libft/libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list *temp = lst;
    
    i = 0;
    while (temp != NULL || temp->next == NULL)
    {
        temp = temp->next;
        i++;
    }
    return (i);
}