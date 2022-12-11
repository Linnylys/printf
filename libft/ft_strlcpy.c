/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:06:42 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/07 21:10:10 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	while (size != 0 && i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (len);
}
/*
//#include <bsd/string.h>
#include <stdio.h>
#include<string.h>
int main()
{
	char str1[] = "coucou";
	char str2[] = "AAAAAAAAAA";

	int res;

	res = ft_strlcpy(str2,str1,0);
	res = ft_strlcpy(str2,str1,1);
	res = ft_strlcpy(str2,str1,2);
	printf("Ma fonction : %ld \n",ft_strlcpy(str2,str1,-1));
	printf("variable dest : %c \n",str2[7]);
	printf("comparaison: %d",strcmp(str1,str2));
	//printf("Ma fonction : %ld\n", strlcpy(stra, strb, 3));

	return (0);

}*/
