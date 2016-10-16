/*
** pull_on_list.c for pull_on_list in /home/soto_a/rendu/CPE_2014_Pushswap
** 
** Made by Kaso Soto
** Login   <soto_a@epitech.net>
** 
** Started on  Tue Dec  2 02:27:03 2014 Kaso Soto
** Last update Sat Dec 13 18:15:17 2014 Kaso Soto
*/

#include "push_swap.h"

void            pa(t_list **l_a, t_list **l_b, int print)
{
  if (*l_b != NULL)
    {
      my_put_in_list(l_a, (*l_b)->next->nbr, 1);
      my_delete_on_edges(*l_b, 0);
      ((*l_b)->next != (*l_b)) ? my_putstr("pa ") : my_putstr("pa");
      if (print == 1)
	my_status_display(*l_a, *l_b);
    }
}

void            pb(t_list **l_b, t_list **l_a, int print)
{
  if (*l_a != NULL)
    {
      my_put_in_list(l_b, (*l_a)->next->nbr, 1);
      my_delete_on_edges(*l_a, 0);
      my_putstr("pb ");
      if (print == 1)
	my_status_display(*l_a, *l_b);
    }
}
