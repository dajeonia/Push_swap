# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 09:00:32 by dajeon            #+#    #+#              #
#    Updated: 2023/03/25 21:08:24 by dajeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SOURCES = main.c stack_base.c stack_oper.c stack_print.c \
		  oper1.c oper2.c oper3.c
INCLUDES = stack.h
LIBFT = libft.a
LIBFTPRINTF = libftprintf.a

LIB = ft 
LIB_DIR = libft

LIB2 = ftprintf
LIB_DIR2 = ft_printf

# **************************************************************************** #

SRCS = $(SOURCES)
OBJS = $(SOURCES:.c=.o)
INCS = $(INCLUDES)
LDLIBS = -l $(LIB) $(LIB2)

SRC_DIR = sources
OBJ_DIR = objects

SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))
OBJS := $(addprefix $(OBJ_DIR)/, $(OBJS))
INCS := $(addprefix $(SRC_DIR)/, $(INCS))
LIBFT := $(addprefix $(LIB_DIR)/, $(LIBFT))
LIBFTPRINTF := $(addprefix $(LIB_DIR2)/, $(LIBFTPRINTF))

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
	./$(NAME) 5 3 1 15 -21 -41 1230 19412 2021

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

$(NAME): $(OBJS) $(LIBFT) $(LIBFTPRINTF)
	$(CC) $(CFLAGS) $(OBJS) -I $(SRC_DIR) -o $(NAME) -L $(LIB_DIR) -L $(LIB_DIR2) -l $(LIB) -l $(LIB2)

$(LIBFT): 
	$(MAKE) -j3 -C $(LIB_DIR) all

$(LIBFTPRINTF): 
	$(MAKE) -j3 -C $(LIB_DIR2) all

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(OBJ_DIR)
	$(CC) $(CFLAGS) $< -c -I $(SRC_DIR) -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

# **************************************************************************** #
