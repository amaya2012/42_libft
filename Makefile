# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 13:09:41 by amweyer           #+#    #+#              #
#    Updated: 2025/04/28 13:09:53 by amweyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $( *.c)

OBJS := $(SRC:%.c=%.o)

CC = cc

CCFLAGS = -Wall -Werror -Wextra

all: $(NAME) 


%.o: %.c
	${CC} ${CCFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(SRC)
	

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all

