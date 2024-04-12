/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:35:00 by chmassa           #+#    #+#             */
/*   Updated: 2024/03/28 08:54:36 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_b(t_list **lst)
{
	int		data;
	int		init_data;
	t_list	*new;
	t_list	*tmplst;

	if (!(*lst))
		return ;
	tmplst = *lst;
	while (tmplst)
	{
		if (tmplst->next == NULL) {
			data = tmplst->data;
			init_data = tmplst->init_data;
		}
		tmplst = tmplst->next;
	}
	ft_lstdel_back(lst);
	new = ft_lstnew(data, init_data);
	ft_lstadd_front(lst, new);
	// write(1, "rrb\n", 4);
	moves++;

}
