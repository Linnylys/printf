/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:24:22 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/05 23:23:57 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

char	*ft_strrchr(const char *string, int seqrchedChar)
{
	int	i;
	int	res;

	i = 0;
	res = -1;
	while (string[i] != '\0')
	{
		if (((int)string[i] - seqrchedChar % 256) == 0)
		{
			res = i;
		}
		i++;
	}
	if (res == -1 && string[i] == seqrchedChar)
		return ((char *)(string + i));
	if (res == -1)
		return (NULL);
	else
		return ((char *)(string + res));
}
/*
#include<stdio.h>
int main()
{
	const char *str="La cabane de mani";
	int	search = 'a';
	printf("indice : %s",ft_strrchr(str,search));
}*/
