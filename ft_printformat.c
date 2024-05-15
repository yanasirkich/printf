/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:02:02 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/15 19:06:54 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr(char *str)
{
	int	count;

	if (!str) //is it needed though omgg
		return (-1);
	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_putptr(uintptr_t ptr)
{
	int	count;
	char *hex;
	//*hex = "0123456789abcdef";

	count = 0;
	count += write (1, "0x", 2);
	count += write (1, &hex[(ptr >> (4 * sizeof(ptr) - 4)) && 0xf], 1);
	
}

int	ft_putnbr(long int nb)
{
	int	result;
	int	count;

	//if (overflow check maybe i dont fucking knowwwww)
		//return (-1);
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb/10);
		count += ft_putchar(nb % 10 + '0');
	}
	return (count);
}

int	ft_putundec(unsigned int nb)
{

}

ft_puthexdec(va_arg(args, unsigned int), 0)