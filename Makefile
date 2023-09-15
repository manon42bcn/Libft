
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 20:09:37 by mporras-          #+#    #+#              #
#    Updated: 2022/01/19 12:39:38 by mporras-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft/ft_atoi.c \
				ft/ft_bzero.c \
				ft/ft_calloc.c \
				ft/ft_isalnum.c \
				ft/ft_isalpha.c \
				ft/ft_isascii.c \
				ft/ft_isdigit.c \
				ft/ft_isprint.c \
				ft/ft_memchr.c \
				ft/ft_memcmp.c \
				ft/ft_memcpy.c \
				ft/ft_memset.c \
				ft/ft_strchr.c \
				ft/ft_strdup.c \
				ft/ft_strlcat.c \
				ft/ft_strlcpy.c \
				ft/ft_strlen.c \
				ft/ft_strncmp.c \
				ft/ft_strnstr.c \
				ft/ft_strrchr.c \
				ft/ft_tolower.c \
				ft/ft_toupper.c \
				ft/ft_itoa.c \
				ft/ft_putchar_fd.c \
				ft/ft_putendl_fd.c \
				ft/ft_putnbr_fd.c \
				ft/ft_putstr_fd.c \
				ft/ft_split.c \
				ft/ft_striteri.c \
				ft/ft_strjoin.c \
				ft/ft_strmapi.c \
				ft/ft_strtrim.c \
				ft/ft_substr.c \
				ft/ft_memmove.c \
				gnl/gnl_gnl.c \
				gnl/gnl_utl.c \
				ext/ft_atolf.c \
				ext/ft_char_replace.c \
				ext/ft_char_utl.c \
				ext/ft_general_utl.c \
				ext/ft_remove_lit.c \
				ext/ft_split_cs.c \
				ext/ft_strcmp.c \
				ext/ft_strjoin_char.c \
				ext/ft_strjoin_clean.c \
				ext/ft_strlen_ext.c \
				ext/ft_strndup.c \
				ext/ft_strnjoin.c \
				ext/ft_strstr.c \
				ext/ft_strtrim_clean.c \
				ext/ft_tab_utl.c \
				ext/ft_secure_alloc.c \
				lst/ft_lstadd_back.c \
				lst/ft_lstadd_front.c \
				lst/ft_lstclear.c \
				lst/ft_lstdelone.c \
				lst/ft_lstiter.c \
				lst/ft_lstlast.c \
				lst/ft_lstmap.c \
				lst/ft_lstnew.c \
				lst/ft_lstsize.c
SRCS_DIR	=	srcs
OBJS 		=	$(addprefix $(OBJS_DIR)/,$(SRCS:.c=.o))
OBJS_SUBS	= 	obj/ \
				obj/ft \
				obj/gnl \
				obj/ext \
				obj/lst
CC			=	gcc
RM			=	@rm -rf
CFLAGS 		=	-Wall -Wextra -Werror -Iinc
NAME		=	libft.a
HEADER		=	inc/libft.h
OBJS_DIR	=	obj

all: $(NAME) $(HEADER)

$(NAME): $(OBJS_SUBS) $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(HEADER)
	$(CC) -Iinc $(CFLAGS) -g -c $< -o $@

$(OBJS_SUBS):
	-@mkdir $(OBJS_SUBS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS_SUBS)

bonus: CFLAGS += -DBONUS
bonus: all

re:	fclean $(NAME)

.PHONY: all clean fclean re bonus
