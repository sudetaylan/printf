/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ofuncts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 18:58:51 by staylan           #+#    #+#             */
/*   Updated: 2024/12/15 18:59:00 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int nbr)
{
	int	j;

	j = 0;
	if (nbr == -2147483648)
		return (ft_putstr("-2147483648"));
	else if (nbr < 0)
	{
		nbr *= -1;
		j += ft_putchar('-');
	}
	if (nbr > 9)
	{
		j += ft_putnbr(nbr / 10);
		j += ft_putchar(nbr % 10 + '0');
	}
	else
		j += ft_putchar(nbr + '0');
	return (j);
}

int	ft_puthexa(unsigned long a, char c)
{
	int	i;

	i = 0;
	if (a >= 16)
		i += ft_puthexa(a / 16, c);
	if (c == 'x')
		i += ft_putchar("0123456789abcdef"[a % 16]);
	else if (c == 'X')
		i += ft_putchar("0123456789ABCDEF"[a % 16]);
	return (i);
}

int	ft_putadr(unsigned long u, int c)
{
	int	i;

	i = 0;
	if (u == 0)
	{
		i += ft_putstr("(nil)");
		return (i);
	}
	i += ft_putstr("0x");
	i += ft_puthexa(u, c);
	return (i);
}

int	ft_putuns(unsigned int u)
{
	int	j;

	j = 0;
	if (u > 9)
	{
		j += ft_putuns(u / 10);
		j += ft_putuns(u % 10);
	}
	else
		j += ft_putchar(u + '0');
	return (j);
}
