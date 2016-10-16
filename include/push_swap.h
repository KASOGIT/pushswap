/*
** pushswap.h for pushswap in /home/soto_a/rendu/CPE_2014_Pushswap
** 
** Made by Kaso Soto
** Login   <soto_a@epitech.net>
** 
** Started on  Mon Dec  1 14:30:26 2014 Kaso Soto
** Last update Sat Dec 13 19:28:12 2014 Kaso Soto
*/

#include <stdlib.h>
#include "my.h"

#ifndef PUSHSWAP_H_
# define PUSHSWAP_H_

typedef struct	s_list
{
  int		nbr;
  struct s_list	*prev;
  struct s_list	*next;
}		t_list;

void	my_init_list(t_list **list);
void	my_put_in_list(t_list **list, int nbr, int choice);
void	my_free_list(t_list **list);
void	my_create_list_a(t_list **l_a, char **av, int size);
void	my_delete_elem(t_list *list);
void	my_delete_on_edges(t_list *list, int choice);
void	my_show_list(t_list *list, int direction);
int	my_size_list(t_list *list);
void	my_status_display(t_list *l_a, t_list *l_b);
int	my_list_is_increasing(t_list *list);
void	swap_element(int *n1, int *n2);
void	my_sort_list(t_list **l_a, t_list **l_b, int print);
int     my_search_smallest(t_list **list);
void	sa(t_list *l_a, t_list *l_b, int print);
void	pa(t_list **l_a, t_list **l_b, int print);
void	pb(t_list **l_b, t_list **l_a, int print);
void	ra(t_list **l_a, t_list *l_b, int print);
void	rra(t_list **l_a, t_list *l_b, int print);
void	my_check_duplicates(char **av);
void	my_check_only_number(char **av);

#endif /* !PUSHSWAP_H_ */
