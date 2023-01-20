/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:12:15 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/05 16:46:11 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void	ft_pusw_print(t_list *lsta, t_list *lstb)
{
	t_list	*tmpa;
	t_list	*tmpb;
	int		size_a;
	int		size_b;
	int		size;

	printf("\t\tlsta size = %d\n", ft_lstsize(lsta));
	printf("\t\tlstb size = %d\n", ft_lstsize(lstb));
	/*if (!lsta)
	{
		puts("Empty list");
		return ;
	}*/
	tmpa = lsta;
	tmpb = lstb;
	size_a = ft_lstsize(lsta);
	size_b = ft_lstsize(lstb);
	if (size_a >= size_b)
		size = size_a;
	else
		size = size_b;
	while (size >= 0)
	{
		if (tmpa && !tmpb)
		{
			printf("\t\t%d          \n", tmpa->data);
			tmpa = tmpa->next;

		}
		else if (!tmpa && tmpb)
		{
			printf("\t\t             %d\n", tmpb->data);
			tmpb = tmpb->next;
		}
		else if (tmpa && tmpb)
		{
			printf("\t\t%d          %d\n", tmpa->data, tmpb->data);
			tmpa = tmpa->next;
			tmpb = tmpb->next;
		}
		size--;
	}
	printf("\t\t%s             %s\n", "_", "_");
	printf("\t\t%s             %s\n", "a", "b");
	//write(1, "\n\n", 2);

}
