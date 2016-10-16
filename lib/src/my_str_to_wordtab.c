/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/soto_a/rendu/Piscine_C_J08
** 
** Made by adam kaso
** Login   <soto_a@epitech.net>
** 
** Started on  Thu Oct  9 15:23:36 2014 adam kaso
** Last update Fri Dec  5 15:00:09 2014 Kaso Soto
*/

#include "my.h"

void	my_init(int *i, int *c, int *charac)
{
  *i = 0;
  *c = 0;
  *charac = 0;
}

void	my_alloc_cpy_set(char **s1, char *s2, int *n, int *i)
{
  *s1 = malloc(sizeof(char) * (*n + 1));
  my_strncpy(*s1, s2, *n);
  *n = 0;
  (*i)++;
}

void	my_increment(int *c, int *charac)
{
  (*c)++;
  (*charac)++;
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	c;
  int	charac;
  char	**ptr_char;

  my_init(&i, &c, &charac);
  if ((ptr_char = malloc(sizeof(char*) * (my_strword(str) + 1))) == NULL)
    return (NULL);
  while (i < my_strword(str))
    {
      if (my_char_is_print(str[c]) == 1)
	{
	  while (my_char_is_print(str[c]) == 1)
	    my_increment(&c, &charac);
	  my_alloc_cpy_set(&ptr_char[i], &str[c - charac], &charac, &i);
	}
      else
	c++;
    }
  ptr_char[i] = 0;
  return (ptr_char);
}
