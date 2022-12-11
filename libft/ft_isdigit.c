/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:28:45 by lsipile           #+#    #+#             */
/*   Updated: 2022/01/16 18:52:09 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include<ctype.h>
#include<stdio.h>
int main ()
{
	printf("Vrai fonction %d \n",isdigit(53));
	printf("Ma foncion %d \n",ft_isdigit(53));

}*/
