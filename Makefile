# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 09:00:32 by dajeon            #+#    #+#              #
#    Updated: 2023/02/17 15:18:58 by dajeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKE = make
CC = gcc
AR = ar
RM = rm
CFLAGS = -Wall -Wextra -Werror -c
ARFLAGS = crus
RMFLAGS = -rf

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : 
	$(MAKE) clean
	$(RM) $(NAME)

re : 
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus

$(NAME): 
