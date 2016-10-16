##
## Makefile for makefile in /home/soto_a/rendu/Piscine_C_J11/do-op
## 
## Made by Kaso Soto
## Login   <soto_a@epitech.net>
## 
## Started on  Mon Oct 20 17:48:16 2014 Kaso Soto
## Last update Sun Oct 16 14:17:16 2016 
##

NAME	= push_swap

SRC	= push_swap.c \
	  swap_on_list.c \
	  pull_on_list.c \
	  front_rotate_on_list.c \
	  back_rotate_on_list.c \
	  usual_func_on_list.c \
	  delete_func_on_list.c \
	  sorting_on_list.c \
	  check_func.c \
	  display_on_list.c

CC	= gcc

OBJS	= $(addprefix src/, $(SRC:.c=.o))

LIB	= -L./lib/ -lmy

INCLUDE = -I./include

CFLAGS	= $(INCLUDE) -O2 -pipe

$(NAME): $(OBJS)
	 $(CC) $(OBJS) $(LIB) -o $(NAME) 

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
