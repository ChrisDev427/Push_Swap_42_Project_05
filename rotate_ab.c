/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 23:14:10 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:47:01 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_ab(t_list **lst_a, t_list **lst_b)
{
	int		tmp_a;
	int		tmp_b;
	t_list	*new_a;
	t_list	*new_b;

	if (!(*lst_a) || !(*lst_b))
		return ;
	tmp_a = (*lst_a)->data;
	ft_lstdel_front(lst_a);
	new_a = ft_lstnew(tmp_a);
	ft_lstadd_back(lst_a, new_a);
	tmp_b = (*lst_b)->data;
	ft_lstdel_front(lst_b);
	new_b = ft_lstnew(tmp_b);
	ft_lstadd_back(lst_b, new_b);
	write(1, "rr\n", 3);
}
