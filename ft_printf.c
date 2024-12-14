/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:40:25 by staylan           #+#    #+#             */
/*   Updated: 2024/12/14 17:40:25 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_putchar(int c)
{
    write(1, &c, 1);
    return (1);  
}
int ft_control(const char c, va_list a)
{
if(c == 'd' || c == 'i')
    return (ft_putnbr(va_arg(a, int)));
else if(c == 'u')
    return (ft_putuns(va_arg(a, unsigned int)));
else if(c == '%')
    return (ft_putchar(va_arg(a, int)));
else if(c == 'x')
    return (ft_puthexa(va_arg(a,unsigned int), 'x'));
else if(c == 'X')
    return (ft_puthexa(va_arg(a,unsigned int),'X'));
else if(c == 's')
    return (ft_putstr(va_arg(a,char *)));
else if(c == 'p')
    return (ft_putadr(va_arg(a,unsigned long)));
else if (c == 'c')
    return (ft_putchar(va_arg(a, int)));
else
    return(0);
}

int ft_printf(const char *format, ...)
{
    va_list a;
    int i;
    int count;

    i = 0;
    count = 0;
    va_start(a, format);
    while(format[i])
    {
        if(format[i] == '%')
        {
            if (format[i + 1] == '\0')
            {
                va_end(a);
                return (count);
            }
            count += ft_control(format[i++ + 1], a);
            i++;
        }
        else
        {
            count += ft_putchar(format[i]);
            i++;      
        }
    }
    va_end(a);
    return (count);
}
