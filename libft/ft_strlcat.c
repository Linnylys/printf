/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:45:22 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/09 21:44:33 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(dst);
	if (len == 0 && size == 1)
		return (ft_strlen(src));
	if (size < len + 1)
		return (size + ft_strlen(src));
	while (src[i] && i + len + 1 < size)
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i + len] = '\0';
	return (len + ft_strlen(src));
}

/*
#include<string.h>
#include<stdio.h>
int main()
{
	char str1[14]; 
	memset(str1,'r',14);
	char *str2 = "lorem ipsum dolor sit amet";

	printf("ma fct: %ld \n",ft_strlcat(str1,str2,15));
	printf("res : %s \n",str1);
	printf("strcmp : %d \n",strcmp(str1,"rrrrrrrrrrrrrr"));
}*/
