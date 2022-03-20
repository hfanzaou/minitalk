# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 17:08:26 by hfanzaou          #+#    #+#              #
#    Updated: 2022/03/08 21:40:55 by hfanzaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SNAME = server
CNAME = client
SSRCS = server_utils.c server.c
CSRCS = client_utils.c client.c
LIBFTPRINTF = ft_printf/libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(SNAME) $(CNAME) $(LIBFTPRINTF)

$(SNAME) : 
	make -C ft_printf
	$(CC) $(CFLAGS) $(SSRCS) $(LIBFTPRINTF) -o $@

$(CNAME) :
	$(CC) $(CFLAGS) $(CSRCS) -o $@

clean : 
	make clean -C ft_printf

fclean : clean
	make fclean -C ft_printf
	rm -rf $(SNAME) $(CNAME) 

re : fclean all


