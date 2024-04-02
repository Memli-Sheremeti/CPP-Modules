# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 13:07:03 by mshereme          #+#    #+#              #
#    Updated: 2024/03/21 17:52:07 by mshereme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Bureaucrat
CXX			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp 						\
				Bureaucrat.class.cpp			\
				AForm.class.cpp					\
				PresidentialForm.class.cpp		\
				RobotomyRequestForm.class.cpp	\
				ShrubberyCreationForm.class.cpp \

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
