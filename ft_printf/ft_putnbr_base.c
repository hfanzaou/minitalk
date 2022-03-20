/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 03:21:46 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/12/10 20:20:01 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_base(unsigned long int nbr, char *base, int *l)
{
	unsigned long int	i;

	i = 0;
	while (base[i])
		i++;
	if (nbr > i - 1)
	{
		ft_putnbr_base(nbr / i, base, l);
	}
	ft_putchar(base[nbr % i], l);
}
