/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_from_head.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:12:15 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/11 09:47:25 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lstprint(t_list *lst)
{
	t_list	*tmp;
	int		node;

	if (!lst)
	{
		puts("Empty list");
		return ;
	}
	node = 1;
	tmp = lst;
	while(tmp)
	{
		printf("data ->%3d|  init_data ->%9d|  index ->%3d|  datacpy ->%3ld|\n", tmp->data, tmp->init_data, tmp->index, tmp->datacpy);
		tmp = tmp->next;
		node++;
	}
}
