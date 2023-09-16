/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:15:01 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/16 14:25:23 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/Nephtys/libft/libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;
    
    if (!(new = malloc(sizeof(t_list))))
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}   
