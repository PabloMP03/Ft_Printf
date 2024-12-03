/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmunoz-p <pmunoz-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:46:08 by pmunoz-p          #+#    #+#             */
/*   Updated: 2024/06/18 16:51:53 by pmunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen( const char *str)
{
	int	size;

	size = 0;
	while (str && str[size])
	{
		++size;
	}
	return (size);
}
