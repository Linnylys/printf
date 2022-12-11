/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:33:35 by lsipile           #+#    #+#             */
/*   Updated: 2022/03/20 17:45:24 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include	"libft.h"

int	ft_printf(const char *str, ...);
int	ft_putchar_md(char c, int iter);
int	ft_putstr_md(char *str);
int	ft_puthex(long long nb, int maj);
int	ft_puthex_for_ptr(unsigned long long nb);
int	ft_putnbr_extended_fd(long long n);
int	ft_put_unsign_nb(int nb);
int	ft_putstr_md(char *str);
int	ft_put_ptr(void *ptr);
#endif
