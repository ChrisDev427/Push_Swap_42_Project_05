/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_stack100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:11:26 by chmassa           #+#    #+#             */
/*   Updated: 2024/03/30 08:22:29 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_stack100(t_list **lsta, t_list **lstb)
{
	int	chunk;

	chunk = 20;
	while (ft_lstsize(*lstb) != 80)
	{
		while (ft_lstsize(*lstb) != chunk)
		{
			if ((*lsta)->data <= chunk) {
				push_b(lsta, lstb);
				ft_pusw_print(*lsta, *lstb, PB);
			}
			else if ((*lsta)->data > chunk) {
				rotate_a(lsta);
				ft_pusw_print(*lsta, *lstb, RA);
			}
		}

		chunk += 20;
	}
}
