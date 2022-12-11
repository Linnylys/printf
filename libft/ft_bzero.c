/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:55:33 by lsipile           #+#    #+#             */
/*   Updated: 2022/01/23 21:16:31 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		*(str + i) = '\0';
		i++;
	}
}
/*
#include<string.h>
#include<stdio.h>
int main()
{

        char str1[] ="La maison de Mina";
        char str2[] ="La maison de Mina";
        ft_bzero(str1,3);
        bzero(str2,3);
	char *str3;
	char *str4;
	str3 = (str1+1);
	str4 = (str2+1);
        printf("ma fonction: %s  - La vraie fonction: %s",str3,str4);
} */
