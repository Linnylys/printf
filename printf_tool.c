/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tool.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:28:40 by lsipile           #+#    #+#             */
/*   Updated: 2022/03/20 17:47:16 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_md(char c, int iter)
{
	iter ++;
	ft_putchar_fd(c, 1);
	return (iter);
}

int	ft_putstr_md(char *str)
{
	if (str == NULL)
		return (ft_putstr_md("(null)"));
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_puthex(long long nb, int maj)
{
	int		count;
	char	*hexstr;

	count = 0;
	if (maj == 1)
		hexstr = "0123456789ABCDEF";
	else
		hexstr = "0123456789abcdef";
	if (nb < 0)
	{
		count = ft_puthex(4294967295 + nb + 1, maj);
	}
	else
	{
		if (nb >= 0 && nb < 16)
			count = ft_putchar_md(hexstr[nb], count);
		else
		{
			count = ft_puthex(nb / 16, maj);
			count = ft_putchar_md(hexstr[nb % 16], count);
		}
	}
	return (count);
}

int	ft_puthex_for_ptr(unsigned long long nb)
{
	int			count;
	char		*hexstr;

	count = 0;
	hexstr = "0123456789abcdef";
	if (nb >= 0 && nb < 16)
		count = ft_putchar_md(hexstr[nb], count);
	else
	{
		count = ft_puthex_for_ptr(nb / 16);
		count = ft_putchar_md(hexstr[nb % 16], count);
	}
	return (count);
}

int	ft_putnbr_extended_fd(long long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		ft_putchar_md('-', 0);
		count = 1 + ft_putnbr_extended_fd((-1) * n);
	}
	else if (n > 9)
	{
		count = ft_putnbr_extended_fd(n / 10);
		count = ft_putchar_md((char)(n % 10 + '0'), count);
	}
	else
		count = ft_putchar_md((char)(n + '0'), count);
	return (count);
}
