/*
** back_rotate_on_list.c for back_rotate_on_list.c in /home/soto_a/rendu/CPE_2014_Pushswap
** 
** Made by Kaso Soto
** Login   <soto_a@epitech.net>
** 
** Started on  Tue Dec  2 15:41:47 2014 Kaso Soto
** Last update Sat Dec 13 19:26:31 2014 Kaso Soto
*/

#include "push_swap.h"

void            rra(t_list **l_a, t_list *l_b, int print)
{
  if ((*l_a) != NULL)
    {
      my_put_in_list(l_a, (*l_a)->prev->nbr, 1);
      my_delete_on_edges((*l_a), 1);
      if (my_size_list(l_b) == 0 && my_list_is_increasing(*l_a) == 1)
	my_putstr("rra");
      else
	my_putstr("rra ");
      if (print == 1)
	my_status_display(*l_a, l_b);
    }
}
