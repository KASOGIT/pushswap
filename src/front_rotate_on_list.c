/*
** front_rotate_on_list.c for front_rotate_on_list.c in /home/soto_a/rendu/CPE_2014_Pushswap
** 
** Made by Kaso Soto
** Login   <soto_a@epitech.net>
** 
** Started on  Tue Dec  2 15:41:22 2014 Kaso Soto
** Last update Sat Dec 13 19:28:31 2014 Kaso Soto
*/

#include "push_swap.h"

void	ra(t_list **l_a, t_list *l_b, int print)
{
  if ((*l_a) != NULL)
    {
      my_put_in_list(l_a, (*l_a)->next->nbr, 0);
      my_delete_on_edges((*l_a), 0);
      my_putstr("ra ");
      if (print == 1)
	my_status_display(*l_a, l_b);
    }
}
