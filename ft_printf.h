/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:24:23 by staylan           #+#    #+#             */
/*   Updated: 2024/12/15 18:59:13 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_puthexa(unsigned long a, char c);
int	ft_putadr(unsigned long u, int c);
int	ft_putuns(unsigned int u);
int	ft_printf(const char *format, ...);

#endif