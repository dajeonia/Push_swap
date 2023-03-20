/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:50:57 by dajeon            #+#    #+#             */
/*   Updated: 2023/01/09 15:11:45 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

# define DECIMAL "0123456789"
# define CAP_HEXA "0123456789ABCDEF"
# define HEXA "0123456789abcdef"

# define LONG_MAX 9223372036854775807

int	ft_putnbr_base(const long n, char *base);
int	ft_putnbr_base_lu(const unsigned long u, char *base, int flag);
int	ft_putnbr_base_u(const unsigned int u, char *base, int flag);

int	ft_abs(const int n);
int	ft_putchar(const char c);
int	ft_putstr(const char *s);

int	ft_printf(const char *format, ...);

#endif
