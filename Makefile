# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adbourji <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 17:16:06 by adbourji          #+#    #+#              #
#    Updated: 2023/11/30 22:54:58 by adbourji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_atoi.c    ft_calloc.c ft_isalpha.c ft_isdigit.c ft_memchr.c \
	   ft_memcpy.c  ft_memset.c ft_strdup.c ft_strlcpy.c ft_strncmp.c \
	   ft_strrchr.c ft_toupper.c ft_bzero.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcat.c \
	   ft_strlen.c  ft_strnstr.c ft_tolower.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

BOBJS = $(BSRCS:.c=.o)

HFILES = libft.h

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $?

%.o: %.c
	$(CC) $(CFLAGS) -c $?

bonus: $(BOBJS)

$(BOBJS): $(BSRCS) $(HFILES)
	$(CC) $(CFLAGS) -c $(BSRCS)
	ar rcs $(NAME) $(BOBJS)

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all bonus clean fclean re
