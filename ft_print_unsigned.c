/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unasigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmunoz-p <pmunoz-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:22:25 by pmunoz-p          #+#    #+#             */
/*   Updated: 2024/06/29 12:20:56 by pmunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int num)
{
	int	n;

	n = 0;
	if (num > 9)
	{
		n += ft_print_unsigned(num / 10);
	}
	return (n += ft_putchar(num % 10 + '0'));
}
