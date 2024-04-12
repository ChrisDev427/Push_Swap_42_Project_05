/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:49:02 by chmassa           #+#    #+#             */
/*   Updated: 2024/04/02 10:31:02 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int argListSize = 0;
int moves = 0;

static t_list	*lst_load(int ac, char **av, int index)
{
	t_list	*list;
	t_list	*new;
	int		i;

	i = index;
	list = NULL;
	while (i < ac)
	{
		int toLoad = ft_atoi(av[i]);
		new = ft_lstnew(toLoad, toLoad);
		ft_lstadd_back(&list, new);
		i++;
	}
	if (index == 0)
		ft_free_tab_2d(av);
	return (list);
}

static void	dispatch(t_list *list_a)
{
	t_list	*list_b;
	size_t	size;

	size = ft_lstsize(list_a);
	list_b = NULL;
	// lstprint(list_a);
	lst_simplify(&list_a);

	// ft_pusw_print(list_a, NULL, NULL);
	sleep(2);

	if (size == 2)
		sort_two(&list_a);
	else if (size == 3)
		sort_three(&list_a);
	else if (size == 4)
		sort_four(&list_a, &list_b);
	else if (size == 5)
		sort_five(&list_a, &list_b);
	else if (size >= 6 && size <= 99)
		sort_7to99(&list_a, &list_b);
	else if (size >= 100 && size <= 499)
		sort_100(&list_a, &list_b);
	else if (size >= 500)
		sort_500(&list_a, &list_b);

	// lstprint(list_a);
	ft_lstdel_all(&list_a);
}

// static void	av_is_str(char **argv)
// {
// 	t_list	*list_a;
// 	char	**args;
// 	int		ac;

// 	ac = 0;
// 	args = ft_split(argv[1], ' ');
// 	while (args[ac])
// 		ac++;
// 	if (parsing(ac, args, 0, 1))
// 	{
// 		list_a = lst_load(ac, args, 0);
// 		if (lst_is_sorted(&list_a))
// 		{
// 			ft_lstdel_all(&list_a);
// 			return ;
// 		}
// 		dispatch(list_a);
// 	}
// 	else
// 	{
// 		ft_free_tab_2d(args);
// 		write(2, "Error\n", 6);
// 		exit(1);
// 	}
// }
// static void initializeArgListSize(int size) {
//     argListSize = size; // Initialisation de la variable globale
// }
// int argListSize = 100;
int	main(int argc, char **argv)
{

	t_list	*list_a;
	argListSize = 100;
	if (argc == 2) {
       
		t_list	*new;
		FILE *file = fopen(argv[1], "r");
    	if (file == NULL) {
			
    	    perror("Error opening file");
    	    return 1;
    	}

    	char line[1024];
		int i = 0;
    	while (fgets(line, 1024, file) != NULL) {
    	    // printf("%s", line); // Vous pouvez traiter chaque ligne ici
			int toLoad = ft_atoi(line);
			if (!toLoad) {
				printf("Error: arg file: line: %d\n", i);
				exit(1);
			}

			new = ft_lstnew(toLoad, toLoad);
			ft_lstadd_back(&list_a, new);
			ft_pusw_print(list_a, NULL, "Initializing...");

			i++;
    	}
		// initializeArgListSize(i);

		if (lst_is_sorted(&list_a))
			{
				ft_lstdel_all(&list_a);
				return (0);
			}
			dispatch(list_a);

    	fclose(file);
	
    }



	// if (argc == 2)
	// {
	// 	av_is_str(argv);
	// }
	if (argc > 2)
	{
		// initializeArgListSize(argc -1);
		if (parsing(argc, argv, 1, 2))
		{
			list_a = lst_load(argc, argv, 1);
			if (lst_is_sorted(&list_a))
			{
				ft_lstdel_all(&list_a);
				return (0);
			}
			dispatch(list_a);
		}
		else
			write(2, "Error\n", 6);
	}
	return (0);
}
