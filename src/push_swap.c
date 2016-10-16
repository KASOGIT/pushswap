/*
** pushswap.c for pushswap in /home/soto_a/rendu/CPE_2014_Pushswap
** 
** Made by Kaso Soto
** Login   <soto_a@epitech.net>
** 
** Started on  Mon Dec  1 14:27:31 2014 Kaso Soto
** Last update Sat Dec 13 18:56:04 2014 Kaso Soto
*/

#include "push_swap.h"

int		main(int ac, char **av)
{
  t_list	*l_a;
  t_list	*l_b;
  int		print;

  l_a = NULL;
  l_b = NULL;
  if (ac > 1)
    {
      ((av[1][0] == '-') && (av[1][1] == 'v')) ? (print = 1) : (print = 0);
      my_check_only_number(av + print);
      my_check_duplicates(av + print);
      my_init_list(&l_a);
      my_init_list(&l_b);
      my_create_list_a(&(l_a), av + print, ac);
      if (my_list_is_increasing(l_a) != 1)
	my_sort_list(&l_a, &l_b, print);
      my_free_list(&l_a);
      my_free_list(&l_b);
    }
  else
    my_putstr("Not enough arguments");
  if (print != 1)
    my_putchar('\n');
  return (0);
}
