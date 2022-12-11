/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:39:46 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/05 14:15:36 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	boolalpha;
	int	booldigit;

	boolalpha = ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
	booldigit = (c >= '0' && c <= '9');
	if (boolalpha || booldigit)
		return (1);
	else
		return (0);
}
/*
#include<ctype.h>
#include<stdio.h>
int main ()
{
	printf("Vrai fonction %d \n",isalnum(1));
	printf("Ma foncion %d \n",ft_isalnum(1));

}*/
