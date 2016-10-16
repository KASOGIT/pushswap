/*
** check_func.c for check_func in /home/soto_a/rendu/CPE_2014_Pushswap
** 
** Made by Kaso Soto
** Login   <soto_a@epitech.net>
** 
** Started on  Tue Dec  2 23:34:04 2014 Kaso Soto
** Last update Fri Dec 12 19:53:46 2014 Kaso Soto
*/

#include "push_swap.h"

void	my_check_only_number(char **av)
{
  int	i;
  int	a;

  i = 1;
  a = 0;
  while (av[i])
    {
      while (av[i][a])
	{
	  if (av[i][a] == '-' || av[i][a] == '+')
	    while (av[i][a] == '-' || av[i][a] == '+')
	      a++;
	  if (!(av[i][a] >= '0' && av[i][a] <= '9'))
	    {
	      my_putstr("There is something other than numbers in the parameters\n");
	      exit(EXIT_FAILURE);
	    }
	  a++;
	}
      a = 0;
      i++;
    }
}

void    my_check_duplicates(char **av)
{
  int   i;
  int   a;
  int   nbr_check;

  i = 1;
  while (av[i])
    {
      nbr_check = my_getnbr(av[i]);
      a = i + 1;
      while (av[a])
        {
          if (nbr_check == my_getnbr(av[a]))
            {
              my_putstr("There are duplicates in the parameters\n");
              exit(EXIT_FAILURE);
            }
          a++;
        }
      a = 0;
      i++;
    }
}

int		my_list_is_increasing(t_list *list)
{
  t_list	*tmp;

  tmp = list->next;
  while (tmp->next != list)
    {
      if (tmp->nbr > tmp->next->nbr)
	return (0);
      tmp = tmp->next;
    }
  return (1);
}
