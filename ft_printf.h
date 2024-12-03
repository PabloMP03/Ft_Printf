/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmunoz-p <pmunoz-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:27:22 by pmunoz-p          #+#    #+#             */
/*   Updated: 2024/06/17 11:29:25 by pmunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_strlen( const char *str);
void	ft_putchar_fd(char c, int fd);
int		ft_print_ptr(uintptr_t ptr);
int		ft_putnbr(int n);
int		ft_print_unsigned(unsigned int num);
int		ft_print_hex(unsigned int nr, char *base);

#endif