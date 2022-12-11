/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:03:27 by lsipile           #+#    #+#             */
/*   Updated: 2022/01/23 21:11:55 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	unsigned char		*str1;
	unsigned char		*str2;
	size_t				i;

	i = 0;
	str1 = (unsigned char *) pointer1;
	str2 = (unsigned char *) pointer2;
	while (i < size)
	{
		if (((int)(str1[i]) - (int)(str2[i])) != 0)
			return ((int)(str1[i]) - (int)(str2[i]));
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char *str="La cabane de mani";
        char *strbis = "La cxben";
        char *str1="La cabane de mani";
        char *str1bis ="La cxben";
        int res1 ;
                res1=ft_memcmp(str,strbis,6);
        int res2;
                res2=memcmp(str1,str1bis,6);
	
 printf("Ma fonction : %d\nVrai fonction :%d",res1,res2);


}*/
