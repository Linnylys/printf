/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:07:14 by lsipile           #+#    #+#             */
/*   Updated: 2022/01/23 20:49:13 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memset(void *s, int c, int n)
{
	int				i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*(str + i) = c;
		i++;
	}
	return (str);
}
/*
#include<string.h>
#include<stdio.h>
int main()
{

	char str1[] ="La maison de Mina";
	char str2[] ="La maison de Mina";
	ft_memset(str1,'a',3);
	memset(str2,'b',3);
 	printf("ma fonction %s  - La vraie fonction %s",str1,str2);
}*/
