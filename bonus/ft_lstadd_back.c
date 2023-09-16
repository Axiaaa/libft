/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:58:47 by lcamerly          #+#    #+#             */
/*   Updated: 2023/09/16 14:43:45 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "/home/Nephtys/libft/libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    last = ft_lstlast(*lst);
    if (lst && new)
    {
        last->next = new;
        new->next = NULL;
    }
}

//main to test
int main() {
  int a = 12;
  int b = 13;
  int c = 14;
  t_list *lst = ft_lstnew(&a);
  ft_lstadd_back(&lst, ft_lstnew(&b));
  ft_lstadd_back(&lst, ft_lstnew(&c));
  return 0;
}