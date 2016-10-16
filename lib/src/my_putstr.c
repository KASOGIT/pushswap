/*
** my_putstr.c for my_putstr.c in /home/soto_a/rendu/Piscine_C_J04
** 
** Made by adam kaso
** Login   <soto_a@epitech.net>
** 
** Started on  Thu Oct  2 12:00:20 2014 adam kaso
** Last update Fri Dec  5 14:51:32 2014 Kaso Soto
*/

#include "my.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
