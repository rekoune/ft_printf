/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:57:11 by arekoune          #+#    #+#             */
/*   Updated: 2024/01/08 15:57:14 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write(char format, va_list ap)
{
	int	counter;

	counter = 0;
	if (format == 'c')
		counter += ft_print_char(va_arg(ap, int));
	else if (format == 's')
		counter += ft_print_string(va_arg(ap, char *));
	else if (format == 'd')
		counter += ft_print_digit(va_arg(ap, int));
	else if (format == 'i')
		counter += ft_print_digit(va_arg(ap, int));
	else if (format == 'u')
		counter += ft_print_digit(va_arg(ap, unsigned int));
	else if (format == 'x')
		counter += ft_print_hexa(va_arg(ap, unsigned int), format);
	else if (format == 'X')
		counter += ft_print_hexa(va_arg(ap, unsigned int), format);
	else if (format == 'p')
		counter += ft_print_hexa(va_arg(ap, unsigned long), format);
	else
		counter += ft_print_char(format);
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		counter;

	counter = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			counter += ft_write(*(++format), ap);
		else
			counter += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (counter);
}
