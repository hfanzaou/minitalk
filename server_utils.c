/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:13:48 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/03/19 16:25:24 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

char	*ft_realloc(char *str, int j)
{
	char	*t;
	int		i;

	i = 0;
	t = malloc(sizeof(char) * j);
	if (!t)
		return (NULL);
	while (str[i])
	{
		t[i] = str[i];
		i++;
	}
	t[i] = str[i];
	free(str);
	str = malloc(sizeof(char) * j + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (t[i])
	{
		str[i] = t[i];
		i++;
	}
	free(t);
	return (str);
}

int	power(int i)
{
	int	o;

	o = 1;
	while (i > 0)
	{
		o *= 2;
		i--;
	}
	return (o);
}

char	*ft_strdup(const char *s)
{
	char	*dst;
	char	*p;
	int		i;

	i = 0;
	while (s[i])
		i++;
	dst = (char *)malloc(i * sizeof(char) + 1);
	if (dst == NULL)
		return (0);
	p = dst;
	while (*s)
	{
		*dst++ = *s++;
	}
	*dst = '\0';
	return (p);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
