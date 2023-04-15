# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 09:00:32 by dajeon            #+#    #+#              #
#    Updated: 2023/04/15 20:02:57 by dajeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SOURCES = test_functions.c \
		  main.c stack_base.c stack_oper.c stack_print.c stack_find.c\
		  oper1.c oper2.c oper3.c
INCLUDES = stack.h
LIBFT = libft.a
LIBFTPRINTF = libftprintf.a
LIBGNL = libgnl.a

LIB = ft 
LIB_DIR = libft

LIB2 = ftprintf
LIB_DIR2 = ft_printf

LIB3 = gnl
LIB_DIR3 = get_next_line

# **************************************************************************** #

SRCS = $(SOURCES)
OBJS = $(SOURCES:.c=.o)
INCS = $(INCLUDES)
LDLIBS = -l $(LIB) $(LIB2) $(LIB3)

SRC_DIR = sources
OBJ_DIR = objects

SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))
OBJS := $(addprefix $(OBJ_DIR)/, $(OBJS))
INCS := $(addprefix $(SRC_DIR)/, $(INCS))
LIBFT := $(addprefix $(LIB_DIR)/, $(LIBFT))
LIBFTPRINTF := $(addprefix $(LIB_DIR2)/, $(LIBFTPRINTF))
LIBGNL := $(addprefix $(LIB_DIR3)/, $(LIBGNL))

# **************************************************************************** #

MAKE = make
CC = gcc
AR = ar
RM = rm

CFLAGS = -Wall -Wextra -Werror
ARFLAGS = crus
RMFLAGS = -rf

LDFLAGS = -L $(LIB_DIR) $(LIB_DIR2)

# Commands ******************************************************************* #

all : $(NAME)
	./$(NAME) 1 2 3 4 5 6 7 8 9

clean :
	$(RM) $(RMFLAGS) $(OBJ_DIR) */*.a */*.o */*/*.o

fclean : 
	$(MAKE) clean
	$(RM) $(RMFLAGS) $(NAME)

re : 
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re

# Dependency ***************************************************************** #

$(NAME): $(OBJS) $(LIBFT) $(LIBFTPRINTF) $(LIBGNL)
	$(CC) $(CFLAGS) $(OBJS) -I $(SRC_DIR) -o $(NAME) -L $(LIB_DIR) -L $(LIB_DIR2) -L $(LIB_DIR3) -l $(LIB) -l $(LIB2) -l $(LIB3)

$(LIBFT): 
	$(MAKE) -j3 -C $(LIB_DIR) all

$(LIBFTPRINTF): 
	$(MAKE) -j3 -C $(LIB_DIR2) all

$(LIBGNL): 
	$(MAKE) -j3 -C $(LIB_DIR3) all

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $< -c -I $(SRC_DIR) -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

# **************************************************************************** #
