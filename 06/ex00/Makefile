# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 13:07:03 by mshereme          #+#    #+#              #
#    Updated: 2024/04/03 16:16:20 by mshereme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ScalarConverter
CXX			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp 					\
				ScalarConverter.class.cpp	\

OBJS		=	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c  $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
