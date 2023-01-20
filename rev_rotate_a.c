/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:10:07 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:48:35 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_list **lst)
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
	write(1, "rra\n", 4);
}
