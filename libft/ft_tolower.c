/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:13:02 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/03 22:49:00 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int character)
{
	int	res;

	res = character;
	if (character >= 'A' && character <= 'Z')
	{
		res = (character - ('A' - 'a'));
	}
	return (res);
}
/*
#include<stdio.h>
int main()
{
	printf("%c",ft_tolower('A'));
}*/
