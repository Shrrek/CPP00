# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperales <jperales@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 09:21:55 by jperales          #+#    #+#              #
#    Updated: 2023/05/02 09:21:59 by jperales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

RM = rm -f

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

SRC =	Account.cpp\
		tests.cpp\

OBJS = $(SRC:.cpp=.o)

#.cpp.o: $(SRC)
.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

re: fclean all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all re clean fclean
