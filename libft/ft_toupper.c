/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:01:01 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/03 22:49:49 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int character)
{
	int	res;

	res = character;
	if (character >= 'a' && character <= 'z')
	{
		res = (character + ('A' - 'a'));
	}
	return (res);
}
/*
#include<stdio.h>
int main()
{
	printf("%c",ft_toupper('a'));
}*/
