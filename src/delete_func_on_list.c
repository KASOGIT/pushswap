/*
** delete_func_on_list.c for delete_func_on_list.c in /home/soto_a/rendu/CPE_2014_Pushswap
** 
** Made by Kaso Soto
** Login   <soto_a@epitech.net>
** 
** Started on  Sun Dec  7 22:57:26 2014 Kaso Soto
** Last update Mon Dec  8 19:04:50 2014 Kaso Soto
*/

#include "push_swap.h"

void            my_free_list(t_list **list)
{
  t_list        *to_del;
  t_list        *tmp;

  tmp = (*list)->next;
  while (tmp != (*list))
    {
      to_del = tmp;
      tmp = tmp->next;
      free(to_del);
    }
  free(*list);
}

void    my_delete_elem(t_list *list)
{
  list->prev->next = list->next;
  list->next->prev = list->prev;
  free(list);
}

void    my_delete_on_edges(t_list *list, int choice)
{
  if (choice == 0)
    {
      if (list->next != list)
        my_delete_elem(list->next);
    }
  else
    {
      if (list->prev != list)
        my_delete_elem(list->prev);
    }
}
