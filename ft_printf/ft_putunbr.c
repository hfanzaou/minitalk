/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 03:12:53 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/26 03:16:46 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putunbr(unsigned int i, int *l)
{
	if (i > 9)
	{
		ft_putunbr(i / 10, l);
	}
	ft_putchar(i % 10 + 48, l);
}
