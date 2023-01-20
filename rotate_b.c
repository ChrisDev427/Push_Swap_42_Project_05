/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 23:12:15 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:46:28 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_list **lst)
{
	int		tmp;
	t_list	*new;

	if (!(*lst))
		return ;
	tmp = (*lst)->data;
	ft_lstdel_front(lst);
	new = ft_lstnew(tmp);
	ft_lstadd_back(lst, new);
	write(1, "rb\n", 3);
}
