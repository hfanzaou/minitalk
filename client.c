/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:20:45 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/03/19 16:22:44 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int i)
{
	if (i == SIGUSR1)
		write(1, "message received", 15);
}

char	sender(char c, int PID, int j)
{
	c = c / 2;
	if (j == 0)
		kill(PID, SIGUSR1);
	else
		kill(PID, SIGUSR2);
	usleep(100);
	return (c);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	l;

	j = 0;
	i = ft_strlen(av[2]);
	signal(SIGUSR1, handler);
	if (ac != 3)
	{	
		write(1, "undifined argumets", 18);
		return (1);
	}
	while (i >= 0)
	{
		l = 8;
		while (l > 0)
		{
			j = (int)*av[2] % 2;
			*av[2] = sender(*av[2], ft_atoi(av[1]), j);
			l--;
		}
		av[2]++;
		i--;
	}
	return (0);
}
