/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:45:25 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/03/19 16:20:23 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_save	g_k;

void	ft_put(int PID)
{
	if (!k.s)
		k.s = ft_strdup("");
	k.c += 1;
	k.s = ft_realloc(k.s, k.c);
	k.s[k.c - 1] = k.j;
	k.s[k.c] = '\0';
	if (!k.j)
	{
		ft_putstr(k.s);
		kill(PID, SIGUSR1);
		free(k.s);
		k.s = NULL;
		k.c = 0;
	}
	k.j = 0;
	k.l = 0;
}

void	handler1(int i, siginfo_t *l, void *context)
{
	(void)context;
	(void)i;
	(k.l) += 1;
	if (k.l == 8)
		ft_put(l->si_pid);
}

void	handler2(int i, siginfo_t *l, void *context)
{	
	(void)context;
	(void)i;
	(k.j) += power(k.l);
	(k.l) += 1;
	if (k.l == 8)
		ft_put(l->si_pid);
}

int	main(void)
{
	int					i;
	struct sigaction	sa_handler1;
	struct sigaction	sa_handler2;

	i = getpid();
	sa_handler1.sa_sigaction = &handler1;
	sa_handler1.sa_mask = 0;
	sa_handler1.sa_flags = 0;
	sa_handler2.sa_sigaction = &handler2;
	sa_handler2.sa_mask = 0;
	sa_handler2.sa_flags = 0;
	ft_printf("PID = %d\n", i);
	sigaction(SIGUSR1, &sa_handler1, NULL);
	sigaction(SIGUSR2, &sa_handler2, NULL);
	while (1)
		;
}
