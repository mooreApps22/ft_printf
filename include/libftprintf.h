/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:42:48 by smoore            #+#    #+#             */
/*   Updated: 2024/02/03 13:05:24 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <limits.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		parse_spec(va_list args, const char format);

int		print_c(int c);
int		print_str(char *str);
int		print_int(int n);
int		print_ptr(unsigned long long ptr);
int		print_unsigned(unsigned int u);
int		print_hex(unsigned int num, const char format);

#endif
