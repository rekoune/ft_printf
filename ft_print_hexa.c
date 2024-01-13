/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:56:53 by arekoune          #+#    #+#             */
/*   Updated: 2024/01/08 15:56:55 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long nb, char c)
{
	char	*base;
	char	str[17];
	int		i;
	int		counter;

	base = "0123456789abcdef";
	counter = 0;
	i = 0;
	if (c == 'p')
		counter += ft_print_string("0x");
	if (nb == 0)
		counter += ft_print_char('0');
	if (c == 'X')
		base = "0123456789ABCDEF";
	while (nb)
	{
		str[i] = base[nb % 16];
		nb /= 16;
		i++;
	}
	str[i--] = '\0';
	while (i >= 0)
		counter += ft_print_char(str[i--]);
	return (counter);
}
