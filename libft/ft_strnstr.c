/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:39:49 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/07 21:13:09 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while ((big [i + j] == little[j]) && i + j < len && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*
#include<string.h>
#include<stdio.h>
int main()
{
	char *str1 ="aaabcabcd";
	char *str2 ="cd";
	char *res1 =ft_strnstr(str1,str2,8);
	char *res2 =strnstr(str1,str2,8);

	printf("Ma fonction %s\n Vrai fct %s\n",res1,res2);
}*/
