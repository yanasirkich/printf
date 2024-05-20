/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:53:26 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/20 00:07:44 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			count += ft_format(str[++i], args);
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

int	ft_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		count += ft_putptr(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int)); // long int maybe
	else if (format == 'u')
		count += ft_putundec(va_arg(args, unsigned int));
	else if (format == 'x')
		count += ft_puthexdec(va_arg(args, unsigned int), 0);
	else if (format == 'X')
		count += ft_puthexdec(va_arg(args, unsigned int), 1);
	else if (format == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}