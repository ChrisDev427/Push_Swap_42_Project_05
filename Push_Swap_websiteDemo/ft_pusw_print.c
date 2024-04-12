/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:12:15 by chmassa           #+#    #+#             */
/*   Updated: 2024/04/02 10:33:13 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#define A 9
#define B 26
#define C 40

void	ft_pusw_print(t_list *lsta, t_list *lstb, char* commandType)
{
	t_list	*tmpa = lsta;
	t_list	*tmpb = lstb;
	int		size = argListSize;
	
	usleep(47000);
	system("clear");
	while (size >= 0) {

		if (!tmpa && !tmpb) {
			printf("%*s%*s\n", A, " ", B, " ");
			
		}

		if (tmpa && !tmpb)
		{
			printf("%*d%*s\n", A, tmpa->init_data, B, " ");
			
			tmpa = tmpa->next;
		}
		else if (!tmpa && tmpb)
		{
			printf("%*s%*d\n", A, " ", B, tmpb->init_data);
			
			tmpb = tmpb->next;
		}
		else if (tmpa && tmpb)
		{
			printf("%*d%*d\n", A, tmpa->init_data, B, tmpb->init_data);
			
			tmpa = tmpa->next;
			tmpb = tmpb->next;
		}
		size--;
	}
	// printf("%23s\n", commandType);
	printf(BLUE"   Size: %d                  Size: %d       Moves: %d      %s\n"DEFAULT, ft_lstsize(lsta), ft_lstsize(lstb), moves, commandType);
	printf("%*s%*s\n", A, "-------------", B, "-------------");
	printf(YELLOW"%*s%*s\n"DEFAULT, A, "   Stack A", B, "      Stack B");
	// printf("%*s%*s\n", A, "-------------", B, "-------------");
	
}
