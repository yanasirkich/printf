/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:02:02 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/20 14:18:54 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	if (!str) //is it needed though omgg
		return (-1);
	count = 0;
	while (str[count])
		count += write(1, &str[count], 1);
	return (count);
}

int	ft_putptr(unsigned long ptr) //probably a bullshit
{
	int	count;
	int	hex_value;

	count = 0;
	if (ft_putchar('0') == -1 || ft_putchar('x') == -1)
		return (-1);
	count += 2;
	hex_value = ft_puthexdec(ptr, 0);
	if (hex_value == -1)
		return (-1);
	count += hex_value;
	return (count);
}

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		if (ft_putchar('-') == -1 || ft_putchar('2') == -1)
			return (-1);
		count += 2;
		nb = 147483648;
	}
	if (nb < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		count++;
		nb = -nb;
	}
	if (nb >= 10)
	{
		if ((count = ft_putnbr(nb / 10)) == -1)
			return (-1);
	}
	if (ft_putchar(nb % 10 + '0') == -1)
		return (-1);
	return (count + 1);
}

int	ft_putundec(unsigned int nb)
{
	char	buffer[11];
	int		count;
	int		i;

	if (nb == 0)
		return (ft_putchar('0'));
	i = 0;
	while (nb)
	{
		buffer[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	count = 0;
	while (i > 0)
	{
		count += ft_putchar(buffer[--i]);
		if (count == -1)
			return (-1);
		count++;
	}
	return (count);
}

int	ft_puthexdec(unsigned long nb, int upper)
{
	char	*hex;
	int		count;
	char	buffer[17];
	int		i;

	if (nb == 0)
		return (ft_putchar('0'));
	if (upper)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	i = 0;
	while (nb)
	{
		buffer[i++] = hex[nb % 16];
		nb /= 16;
	}
	count = 0;
	while (i-- > 0)
	{
		count += ft_putchar(buffer[i]);
		if (count == -1)
			return (-1);
	}
	return (count);
}
