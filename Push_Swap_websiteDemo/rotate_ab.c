/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 23:14:10 by chmassa           #+#    #+#             */
/*   Updated: 2024/03/28 08:54:46 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_ab(t_list **lst_a, t_list **lst_b)
{
	int		tmp_aData;
	int		tmp_aInit;
	int		tmp_bData;
	int		tmp_bInit;
	t_list	*new_a;
	t_list	*new_b;

	if (!(*lst_a) || !(*lst_b))
		return ;
	tmp_aData = (*lst_a)->data;
	tmp_aInit = (*lst_a)->init_data;
	ft_lstdel_front(lst_a);
	new_a = ft_lstnew(tmp_aData, tmp_aInit);
	ft_lstadd_back(lst_a, new_a);
	tmp_bData = (*lst_b)->data;
	tmp_bInit = (*lst_b)->init_data;
	ft_lstdel_front(lst_b);
	new_b = ft_lstnew(tmp_bData, tmp_bInit);
	ft_lstadd_back(lst_b, new_b);
	// write(1, "rr\n", 3);
	moves++;

}
