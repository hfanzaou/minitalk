/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 00:55:55 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/12/10 20:20:17 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putstr(char *str, int *l)
{
	if (!str)
	{
		ft_putstr("(null)", l);
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, l);
		str++;
	}
}