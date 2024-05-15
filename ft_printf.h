/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:57:05 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/15 18:31:48 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef	 PRINTF_H
# define PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	ft_format(char format, va_list args);

#endif
