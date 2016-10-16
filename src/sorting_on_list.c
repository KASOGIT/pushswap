/*
** sorting_on_list.c for sorting_on_list in /home/soto_a/rendu/CPE_2014_Pushswap
** 
** Made by Kaso Soto
** Login   <soto_a@epitech.net>
** 
** Started on  Tue Dec  2 17:19:29 2014 Kaso Soto
** Last update Sat Dec 13 18:16:55 2014 Kaso Soto
*/

#include "push_swap.h"

int		my_search_smallest(t_list **list)
{
  int		i;
  int		a;
  int		check_nbr;
  t_list	*tmp;

  i = 0;
  a = 0;
  check_nbr = (*list)->next->nbr;
  tmp = (*list)->next;
  while (tmp->next != *list)
    {
      tmp = tmp->next;
      if (tmp->nbr < check_nbr)
	{
	  a = i + 1;
	  check_nbr = tmp->nbr;
	}
      i++;
    }
  return (a);
}

void		my_sort_list(t_list **l_a, t_list **l_b, int print)
{
  int		i;
  int		pos_small;
  int		size_list;
  int		stop;

  i = 0;
  stop = 0;
  while ((*l_a)->next != (*l_a) && stop != 1)
    {
      size_list = (my_size_list(*l_a) - 1);
      pos_small = my_search_smallest(l_a);
      if (!(pos_small == size_list) && pos_small != 1)
	while (i++ != pos_small)
	  ra(l_a, *l_b, print);
      else if (pos_small == size_list)
	rra(l_a, *l_b, print);
      else if (pos_small == 1)
	sa(*l_a, *l_b, print);
      i = 0;
      (my_list_is_increasing(*l_a) == 1) ? stop = 1 : pb(l_b, l_a, print);
    }
  while ((*l_b)->next != (*l_b))
    pa(l_a, l_b, print);
}
