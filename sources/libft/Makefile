# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 19:15:07 by dajeon            #+#    #+#              #
#    Updated: 2023/03/04 12:39:18 by dajeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = ft_strncmp.c ft_memchr.c ft_atoi.c ft_memcmp.c ft_strnstr.c \
	   ft_strrchr.c ft_strchr.c ft_toupper.c ft_tolower.c ft_strlcpy.c \
	   ft_strlcat.c \
	   \
	   ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   \
	   ft_calloc.c ft_strdup.c \
	   \
	   ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	   ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	   ft_putnbr_fd.c

# **************************************************************************** #

SOURCES_BONUS = ft_lstnew.c\
	 ft_lstadd_front.c ft_lstadd_back.c\
	 ft_lstsize.c ft_lstlast.c\
	 ft_lstdelone.c ft_lstclear.c\
	 ft_lstiter.c ft_lstmap.c\

# **************************************************************************** #

CC = gcc
AR = ar
RM = rm -rf

CFLAGS = -Wall -Werror -Wextra
ARFLAGS = crus
RMFLAGS = -rf

ifdef BONUS
	OBJS := $(addprefix $(SOURCES:.c=.o), $(SOURCES_BONUS:.c=.o))
else
	OBJS := $(SRCS:.c.o)
endif


# **************************************************************************** #

all : $(NAME)

bonus :
	make BONUS=1 $(NAME)

clean : 
	$(RM) $(RMFLAGS) $(OBJS)

fclean : 
	$(MAKE) clean
	$(RM) $(RMFLAGS) $(NAME)

re : 
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus

# **************************************************************************** #

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

# **************************************************************************** #
