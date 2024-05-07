# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martorre <martorre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 16:49:33 by martorre          #+#    #+#              #
#    Updated: 2024/05/07 12:50:13 by martorre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphism
SRC = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
FLAGS = -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
DEPFLAGS = -MMD -MP
DIR_OBJS = objs/
OBJS = $(addprefix $(DIR_OBJS), $(SRC:.cpp=.o))
DEPS = $(OBJS:.o=.d)

all: $(DIR_OBJS) $(NAME)

$(DIR_OBJS):
	mkdir -p $(DIR_OBJS)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

$(DIR_OBJS)%.o: %.cpp Makefile
	c++ $(FLAGS) $(DEPFLAGS) -c $< -o $@

clean:
	rm -rf $(DIR_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re