/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:45:22 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/03/19 16:20:11 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <sys/types.h>
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct save
{
	int		l;
	int		j;
	int		c;
	char	*s;
}	t_save;

int		ft_printf(const char *str, ...);
char	*ft_strdup(const char *s);
int		power(int i);
char	*ft_realloc(char *str, int j);
int		ft_strlen(char	*str);
int		ft_atoi(const char *str);
void	ft_putstr(char *str);

#endif
