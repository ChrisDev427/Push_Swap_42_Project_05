/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:39:17 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:39:28 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **lst)
{
	t_list	*tmp;
	int		x;

	if (!(*lst))
		return ;
	tmp = *lst;
	x = tmp->data;
	tmp->data = tmp->next->data;
	tmp->next->data = x;
	write(1, "sa\n", 3);
}
