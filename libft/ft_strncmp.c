/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:22:09 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/07 21:12:36 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	i = 0;
	while ((first[i] != '\0' || second[i] != '\0') && i < length)
	{
		if ((first[i] - second[i]) != 0)
		{
			if (ft_isprint(first[i]) == 1 || ft_isprint(second[i]))
				return (first[i] - second[i]);
			else
				return ((unsigned char)(first[i] - second[i]));
		}
		i++;
	}
	return (0);
}
/*
#include<string.h>
#include<stdio.h>
int main()
{
	const char	*str1 = "\200";
	const char	*str2 = "\0";

	printf("Ma fonction %d\n Vrai fonction %d",
	ft_strncmp(str1,str2,6),strncmp(str1,str2,6));
}*/
