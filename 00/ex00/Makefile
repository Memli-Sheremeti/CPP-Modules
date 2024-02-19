# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 13:07:03 by mshereme          #+#    #+#              #
#    Updated: 2024/02/19 11:11:47 by mshereme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror

FILES		=	./megaphone \

HEADERS		=	-I./include

SRCS		=	$(addsuffix .cpp, $(FILES))
OBJS		=	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	@$(CC) $(FLAGS) -c $(HEADERS) $< -o $@
	@echo "Compiling $@"

clean:
	@rm -rf $(OBJS)
	@echo "Cleaned philo object files"

fclean: clean
	@rm -rf $(NAME)
	@echo "Cleaned philo"

re: fclean all

.PHONY : megaphone all clean fclean re
