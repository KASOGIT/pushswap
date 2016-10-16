/*
** my.h for my.h in /home/soto_a/rendu/Piscine_C_J08
** 
** Made by adam kaso
** Login   <soto_a@epitech.net>
** 
** Started on  Wed Oct  8 20:29:51 2014 adam kaso
** Last update Fri Dec  5 15:08:00 2014 Kaso Soto
*/

#include <stdlib.h>
#include <unistd.h>

#ifndef MY_H_
# define MY_H_

void	my_putchar(char c);
int	my_char_is_print(char c);
int	my_isneg(int nb);
void	my_put_nbr(int nb);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int nombre);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int nb);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char *to_find);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int nb);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_islower(char *str);
int	my_str_isupper(char *str);
int	my_str_isprintable(char *str);
int	my_showstr(char *str);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int nb);
int	my_strlcat(char *dest, char *src, int size);
int	my_getnbr_base(char *str, char *base);
void	my_putnbr_base(int nb, char *base);
int	my_strword(char *str);
char	**my_str_to_wordtab(char *str);
int	my_show_wordtab(char **tab);
char	*my_strdup(char *src);

#endif /* !MY_H_ */
