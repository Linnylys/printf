/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:05:58 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/07 20:36:34 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	int	i;

	if (source == NULL && destination == NULL)
		return (NULL);
	destination = (char *) destination;
	source = (char *) source;
	if (destination > source)
	{
		i = (int)size - 1 ;
		while (i >= 0)
		{
			*((char *)destination + i) = *((char *)source + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)size)
		{
			*((char *)destination + i) = *((char *)source + i);
			i++;
		}
	}
	return (destination);
}
/*
#include<stdio.h>
#include<string.h>
int main ()
{
				char	dst1[0xF0];
			char	dst2[0xF0];
			char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
			int		size = 0xF0 - 0xF;

			memset(dst1, 'A', sizeof(dst1));
			memset(dst2, 'A', sizeof(dst2));

			memcpy(dst1, data, strlen(data));
			memcpy(dst2, data, strlen(data));
			memmove(dst1, dst1 + 3, size);
			ft_memmove(dst2, dst2 + 3, size);
			if (!memcmp(dst1, dst2, size))
				printf("c'est bon");
}

int main ()
{
	char str1[] = "ABCDEFGHQJKLMNOPQRSTW";
	char str2[] = "ABCDEFGHQJKLMNOPQRSTW";

	ft_memmove(str1+5,str1,7);
	memmove(str2+5,str2,7);

	printf("Ma fonction      :%s \nLa vrai fonction :%s",str1,str2);

}*/
