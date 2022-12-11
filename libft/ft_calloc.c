/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:23:28 by lsipile           #+#    #+#             */
/*   Updated: 2022/01/23 21:13:44 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	void			*ptr;
	unsigned char	*tmp;

	tmp = malloc (nmemb * size);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		*(tmp + i) = 0;
		i++;
	}
	ptr = tmp;
	return (ptr);
}
/*
#include<stdio.h>
int main()
{
	int i;
	int *ptr;
	int *ptr1;

	ptr =(int *) ft_calloc(5,sizeof(int));
	ptr1 = (int*) calloc(5,sizeof(int));

	i = 0;
	while (i < 5)
	{
		printf("Ma fonction : %d --- Vrai fonction : %d\n",*(ptr+i),*(ptr1+i));
		i++;
	}
	free(ptr);
	free(ptr1);
	return 0;
}*/
