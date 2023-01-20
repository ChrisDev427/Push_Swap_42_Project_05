/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 09:54:14 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/05 17:15:18 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **lst_a, t_list **lst_b)
{
	int		to_push;
	t_list	*new;

	if (!(*lst_a))
		return ;
	to_push = (*lst_a)->data;
	new = ft_lstnew(to_push);
	ft_lstadd_front(lst_b, new);
	ft_lstdel_front(lst_a);
	write(1, "pb\n", 3);
}
