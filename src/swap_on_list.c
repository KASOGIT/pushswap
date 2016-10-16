/*
** swap_on_list.c for swap_on_list in /home/soto_a/rendu/CPE_2014_Pushswap
** 
** Made by Kaso Soto
** Login   <soto_a@epitech.net>
** 
** Started on  Tue Dec  2 02:25:20 2014 Kaso Soto
** Last update Sat Dec 13 19:25:18 2014 Kaso Soto
*/

#include "push_swap.h"

void    swap_element(int *n1, int *n2)
{
  int   tmp;

  tmp = *n1;
  *n1 = *n2;
  *n2 = tmp;
}

void    sa(t_list *l_a, t_list *l_b, int print)
{
  if (l_a != NULL)
    {
      swap_element(&(l_a->next->nbr), &(l_a->next->next->nbr));
      if (my_size_list(l_b) == 0 && my_list_is_increasing(l_a) == 1)
	my_putstr("sa");
      else
	my_putstr("sa ");
      if (print == 1)
	my_status_display(l_a, l_b);
    }
}
