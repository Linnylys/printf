/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:56:49 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/06 17:23:00 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 0 && c < 128)
	{
		if ((c >= 0 && c <= 31) || c == 127)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}
/*
#include<ctype.h>
#include<stdio.h>
int main ()
{
	printf("Vrai fonction %d \n",isprint(500));
	printf("Ma foncion %d \n",ft_isprint(500));
}*/
