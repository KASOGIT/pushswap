/*
** my_strdup.c for my_strdup.c in /home/soto_a/rendu/Piscine_C_J08
** 
** Made by adam kaso
** Login   <soto_a@epitech.net>
** 
** Started on  Wed Oct  8 22:21:05 2014 adam kaso
** Last update Fri Dec  5 14:55:15 2014 Kaso Soto
*/

#include "my.h"

char	*my_strdup(char *src)
{
  char	*str;
  int	i;

  i = 0;
  str =  malloc(sizeof(char) * my_strlen(src));
  if (str)
    {
      while (src[i] != '\0')
	{
	  str[i] = src[i];
	  i++;
	}
      str[i] = '\0';
      return (str);
    }
  else
    {
      return (0);
    }
}
