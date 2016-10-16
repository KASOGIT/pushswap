/*
** display_on_list.c for display_on_list in /home/soto_a/rendu/CPE_2014_Pushswap
** 
** Made by Kaso Soto
** Login   <soto_a@epitech.net>
** 
** Started on  Sat Dec 13 18:17:55 2014 Kaso Soto
** Last update Sat Dec 13 18:49:43 2014 Kaso Soto
*/

#include "push_swap.h"

void            my_show_list(t_list *list, int direction)
{
  t_list        *tmp;

  if (direction == 0)
    {
      tmp = list->next;
      while (tmp != list)
        {
          my_put_nbr(tmp->nbr);
          my_putchar(' ');
          tmp = tmp->next;
        }
    }    
  else
    { 
      tmp = list->prev;
      while (tmp != list)
        {
          my_put_nbr(tmp->nbr);
          my_putchar(' ');
          tmp = tmp->prev;
        }
    }
  my_putchar('\n');
}

void	my_status_display(t_list *l_a, t_list *l_b)
{
  my_putstr("\nState of list A: ");
  (l_a->next != l_a) ? my_show_list(l_a, 0) : my_putstr("(empty)\n");
  my_putstr("State of list B: ");
  (l_b->next != l_b) ? my_show_list(l_b, 0) : my_putstr("(empty)\n");
  if (l_b->next != l_b || my_list_is_increasing(l_a) != 1)
    my_putchar('\n');
}
