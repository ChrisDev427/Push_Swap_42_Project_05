/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:36:44 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:48:00 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_list **lst)
{
	int		tmp;
	t_list	*new;
	t_list	*tmplst;

	if (!(*lst))
		return ;
	tmplst = *lst;
	while (tmplst)
	{
		if (tmplst->next == NULL)
			tmp = tmplst->data;
		tmplst = tmplst->next;
	}
	ft_lstdel_back(lst);
	new = ft_lstnew(tmp);
	ft_lstadd_front(lst, new);
}

void	rev_rotate_ab(t_list **lst_a, t_list **lst_b)
{
	if (!(*lst_a) || !(*lst_b))
		return ;
	rev_rotate(lst_a);
	rev_rotate(lst_b);
	write(1, "rrr\n", 4);
}
