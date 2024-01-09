/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:56:28 by arekoune          #+#    #+#             */
/*   Updated: 2024/01/08 15:56:30 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	counter;

	counter = 0;
	if (!str)
	{
		counter += write(1, "(null)", 6);
		return (counter);
	}
	while (*str)
	{
		counter += write(1, str, 1);
		str++;
	}
	return (counter);
}
