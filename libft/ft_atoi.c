/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:45:55 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/09 20:16:48 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long long	i;
	unsigned long long	res;
	int					signe;

	i = 0;
	res = 0;
	signe = 1;
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * (-1);
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (res > 9223372036854775807)
		return (-1 * (1 + signe) / 2);
	return ((int)(signe * res));
}
/*
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char	*str1 ="9223372036854775809";

	printf("Ma fonction :%d\nVrai fonction %d",ft_atoi(str1),atoi(str1));
}*/
