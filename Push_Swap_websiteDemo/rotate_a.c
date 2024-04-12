/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:54:09 by chmassa           #+#    #+#             */
/*   Updated: 2024/03/28 08:54:42 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **lst)
{
	int		tmpData;
	int		tmpInit;
	t_list	*new;

	if (!(*lst))
		return ;
	tmpData = (*lst)->data;
	tmpInit = (*lst)->init_data;
	ft_lstdel_front(lst);
	new = ft_lstnew(tmpData, tmpInit);
	ft_lstadd_back(lst, new);
	// write(1, "ra\n", 3);
	moves++;

}
