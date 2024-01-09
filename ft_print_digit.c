/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:56:41 by arekoune          #+#    #+#             */
/*   Updated: 2024/01/08 15:56:44 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	reverse(char *s, int i)
{
	int		counter;
	char	str[12];
	int		j;

	counter = 0;
	j = 0;
	i--;
	while (i >= 0)
	{
		str[j] = s[i];
		j++;
		i--;
	}
	str[j] = '\0';
	counter += ft_print_string(str);
	return (counter);
}

int	ft_print_digit(long nb)
{
	int		counter;
	char	str[12];
	int		i;
	int		sign;

	counter = 0;
	sign = 1;
	i = 0;
	if (nb == 0)
		counter += write(1, "0", 1);
	if (nb < 0)
	{
		nb = -nb;
		sign = -1;
	}
	while (nb)
	{
		str[i++] = (nb % 10) + 48;
		nb = nb / 10;
	}
	if (sign < 0)
		str[i++] = '-';
	str[i] = '\0';
	counter += reverse(str, i);
	return (counter);
}
