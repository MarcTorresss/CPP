# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martorre <martorre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 16:49:33 by martorre          #+#    #+#              #
#    Updated: 2024/03/27 12:06:37 by martorre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = main.cpp Contact.cpp PhoneBook.cpp
FLAGS = -std=c++98 -Wall -Wextra -Werror
DEPFLAGS = -MMD -MP
DIR_OBJS = objs/
OBJS = $(addprefix $(DIR_OBJS), $(SRC:.cpp=.o))
DEPS = $(addprefix $(DIR_OBJS), $(OBJS:.o=.d))

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