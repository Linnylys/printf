/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:45:34 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/07 22:02:12 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
		ft_putchar_fd('\n', fd);
	}
}
