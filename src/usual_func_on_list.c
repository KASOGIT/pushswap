/*
** usual_func_on_list.c for usual_func in /home/soto_a/rendu/CPE_2014_Pushswap
** 
** Made by Kaso Soto
** Login   <soto_a@epitech.net>
** 
** Started on  Tue Dec  2 15:55:03 2014 Kaso Soto
** Last update Sat Dec 13 18:25:13 2014 Kaso Soto
*/

#include "push_swap.h"

void	my_init_list(t_list **list)
{
  if (((*list) = malloc(sizeof(t_list))) == NULL)
    exit(EXIT_FAILURE);
  (*list)->prev = *list;
  (*list)->next = *list;
}

void    my_create_list_a(t_list **l_a, char **av, int size)
{
  int   i;

  i = 1;
  while (av[i])
    my_put_in_list(l_a, my_getnbr(av[i++]), 0);
}

void            my_put_in_list(t_list **list, int nbr, int choice)
{
  t_list        *new_elem;

  if ((new_elem = malloc(sizeof(t_list))) == NULL)
    exit(EXIT_FAILURE);
  if (choice == 0)
    {
      new_elem->prev = (*list)->prev;
      new_elem->next = (*list);
      (*list)->prev->next = new_elem;
      (*list)->prev = new_elem;
      new_elem->nbr = nbr;
    }
  else
    {
      new_elem->nbr = nbr;
      new_elem->prev = (*list);
      new_elem->next = (*list)->next;
      (*list)->next->prev = new_elem;
      (*list)->next = new_elem;
    }
}

int		my_size_list(t_list *list)
{
  t_list	*tmp;
  int		i;

  tmp = list->next;
  i = 0;
  while (tmp != list)
    {
      tmp = tmp->next;
      i++;
    }
  return (i);
}
