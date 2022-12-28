# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwareepo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 15:44:16 by pwareepo          #+#    #+#              #
#    Updated: 2022/10/30 20:12:43 by pwareepo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRCS = ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_bzero.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_memset.c\
		ft_memcpy.c\
		ft_memmove.c

OBJS = $(SRCS:.c=.o)
all: $(NAME)
%o: %c
	gcc $(FLAGS) -c $< -o $@
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: clean fclean all re