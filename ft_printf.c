/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:50:56 by lsipile           #+#    #+#             */
/*   Updated: 2022/03/20 18:04:33 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdarg.h>
#include"ft_printf.h"

int	ft_put_unsign_nb(int nb)
{
	unsigned long	nblim;
	int				count;

	nblim = 4294967295;
	if (nb < 0)
		count = ft_putnbr_extended_fd(nblim + nb + 1);
	else
		count = ft_putnbr_extended_fd(nb);
	return (count);
}

int	ft_put_ptr(void *ptr)
{
	int	count;

	count = 2;
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	count = count + ft_puthex_for_ptr((unsigned long long)ptr);
	return (count);
}

int	input2show(va_list per, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar_md((char)va_arg(per, int), count);
	else if (c == 's')
		count = ft_putstr_md(va_arg(per, char *));
	else if (c == 'i' || c == 'd')
		count = ft_putnbr_extended_fd(va_arg(per, int));
	else if (c == 'u')
		count = ft_put_unsign_nb(va_arg(per, int));
	else if (c == 'x')
		count = ft_puthex(va_arg(per, int), 0);
	else if (c == 'X')
		count = ft_puthex(va_arg(per, int), 1);
	else if (c == 'p')
		count = ft_put_ptr(va_arg(per, void *));
	else if (c == '%')
		count = ft_putchar_md('%', count);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			count;
	va_list		ap;

	i = 0;
	va_start(ap, str);
	count = 0;
	while (str[i])
	{	
		if (str[i] == '%' && str[i + 1])
		{
			count = count + input2show(ap, str[i + 1]);
			i++;
		}
		else
			count = ft_putchar_md(str[i], count);
		i++;
	}
	va_end(ap);
	return (count);
}
