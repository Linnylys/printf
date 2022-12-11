/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:03:54 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/07 21:01:47 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned int	tmp;
	char			*string;
	int				res;

	i = 0;
	res = -1;
	string = (char *)s;
	while (i < n)
	{
		tmp = *(string + i);
		if ((tmp - c % 256) == 0)
		{
			res = i;
			break ;
		}
		i++;
	}
	if (res == -1)
		return (NULL);
	else
		return ((char *)(string + res));
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
        char *str="La cabane de mani";
        int     search = 'z';
	char *str1="La cabane de mani";
        int     search1 = 'z';
	void *res1 ;
		res1=ft_memchr(str,search,15);
	void *res2;
		res2=memchr(str,search,15);

        printf("Ma fonction : %s\nVrai fonction :%s",(char*)res1,(char*)res2);
}
*/
