/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:56:57 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/07 21:07:43 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include <stdlib.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((-1) * n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((char)(n % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((char)(n + '0'), fd);
}
/*
void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	int		i;

	str = ft_itoa(n);
	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i],fd);
		i++;
	}
	free(str);
}*/
