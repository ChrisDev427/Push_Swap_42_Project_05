/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:00:12 by chmassa           #+#    #+#             */
/*   Updated: 2024/03/30 09:06:45 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# ifndef MAX
#  define MAX 2147483648
# endif
// # define RED "\033[1;31m"
// # define GREEN "\033[1;32m"
// # define YELLOW "\033[1;33m"
// # define BLUE "\033[1;36m"
// # define NBLUE "\033[1;34m"
// # define DEFAULT "\033[0m"
# define RED "\033[1;31m\033[1m"
# define GREEN "\033[1;32m\033[1m"
# define YELLOW "\033[1;33m\033[1m"
# define BLUE "\033[1;36m\033[1m"
# define NBLUE "\033[1;34m\033[1m"
# define DEFAULT "\033[0m"

# define RA "Rotate A"
# define RVA "Rev Rotate A"
# define RB "Rotate B"
# define RVB "Rev Rotate B"
# define PA "Push A"
# define PB "Push B"
# define SA "Swap A"
# define SB "Swap B"
# define SS "Swap AB"


extern int argListSize;
extern int moves;

typedef struct s_list
{
	int				data;
	long			datacpy;
	int				init_data;
	int				index;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;
//------- parsing -------------------------------------------------------------
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
long	ft_atoi(const char *str);
int		parsing(int ac, char **av, int a, int b);
int		lst_is_sorted(t_list **lst);
int		ft_isdigit(int c);

t_list	*ft_lstnew(int data, int init_data);
void	ft_free_tab_2d(char **tab);
void	lst_simplify(t_list **lst);
//------- lstadd --------------------------------------------------------------
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_position(t_list **lst, t_list *new, int position);
//------- lstdel --------------------------------------------------------------
void	ft_lstdel_front(t_list **lst);
void	ft_lstdel_back(t_list **lst);
void	ft_lstdel_all(t_list **lst);
//-------- print, size, last, find --------------------------------------------
void	ft_pusw_print(t_list *lsta, t_list *lstb, char* commandType);
int		ft_lstsize(t_list *lst);
int		ft_lstfind_min(t_list **lst);
int		ft_lstfind_max(t_list **lst);
int		node_value(t_list **lst, int node);
void	lstprint(t_list *lst);
t_list	*ft_lstlast(t_list *lst);

//-------- push_swap functions ------------------------------------------------
void	swap_a(t_list **lst);
void	swap_b(t_list **lst);
void	swap_ab(t_list **lst_a, t_list **lst_b);
void	rotate_a(t_list **lst);
void	rotate_b(t_list **lst);
void	rotate_ab(t_list **lst_a, t_list **lst_b);
void	rev_rotate_a(t_list **lst);
void	rev_rotate_b(t_list **lst);
void	rev_rotate_ab(t_list **lst_a, t_list **lst_b);
void	push_a(t_list **lst_a, t_list **lst_b);
void	push_b(t_list **lst_a, t_list **lst_b);
//-------- algo functions -----------------------------------------------------
void	sort_two(t_list **lst);
void	sort_three(t_list **lst);
void	sort_four(t_list **lsta, t_list **lstb);
void	sort_five(t_list **lsta, t_list **lstb);
void	sort_7to99(t_list **lsta, t_list **lstb);
void	sort_100(t_list **lsta, t_list **lstb);
void	sort_500(t_list **lsta, t_list **lstb);
void	split_stack100(t_list **lsta, t_list **lstb);
void	split_stack500(t_list **lsta, t_list **lstb);
void	sort_stack_a_100(t_list **lsta, t_list **lstb);
void	sort_stack_a_500(t_list **lsta, t_list **lstb);
#endif
