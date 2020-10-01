# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/27 20:30:35 by rkasubuc          #+#    #+#              #
#    Updated: 2020/09/27 22:47:04 by kkida            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
C_FLAGS =  -Wall -Wextra -Werror 

#Filenames
NAME := rush-02
SRCS := main.c char_to_dict.c get_from_dict.c output.c get_num_word.c
SRCDIR = ./
FILES = $(addprefix $(SRCDIR), $(SRCS))

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean:
		rm -f $(SRCS:.c=.o)

fclean: clean
		rm -f $(NAME)

re: fclean all
