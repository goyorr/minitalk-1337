/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 07:45:55 by zel-kach          #+#    #+#             */
/*   Updated: 2022/11/19 15:10:26 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# define LOWER "0123456789abcdef"
# define UPPER "0123456789ABCDEF"

unsigned int	g_count;
int				ft_printf(const char *format, ...);
void			ft_putchar(char c);
void			ft_putstr(char *s);
void			ft_putnbr(int nb);
void			ft_unsigned_nbr(unsigned int nb);
void			ft_print_hex_lower(unsigned int nb);
void			ft_print_hex_upper(unsigned int nb);
void			ft_0x(unsigned long long nb);

#endif
