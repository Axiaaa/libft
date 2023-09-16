/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:49:46 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/16 14:38:48 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/Nephtys/libft/libft.h"

t_list *ft_lstlast(t_list *lst)
{
    int i;
    t_list *temp = lst;
    i = 0;
    while (i < (ft_lstsize(lst) - 1))
    {
        temp = temp->next;
        i++;
    }
    return (temp);
}
