/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:49:01 by lsipile           #+#    #+#             */
/*   Updated: 2022/01/16 19:12:39 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include<ctype.h>
#include<stdio.h>
int main ()
{
	printf("Vrai fonction %d \n",isascii(128));
	printf("Ma foncion %d \n",ft_isascii(128));

}*/
