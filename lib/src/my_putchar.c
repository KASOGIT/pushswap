/*
** my_putchar.c for my_putchar in /home/soto_a/my_funcs
** 
** Made by adam kaso
** Login   <soto_a@epitech.net>
** 
** Started on  Wed Oct  1 10:04:23 2014 adam kaso
** Last update Fri Dec  5 15:04:13 2014 Kaso Soto
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
