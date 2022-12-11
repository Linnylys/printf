/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:52:52 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/07 21:08:31 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *string, int seqrchedChar)
{
	int	i;
	int	res;

	i = 0;
	res = -1;
	while (string[i] != '\0')
	{
		if (((int)string[i] - seqrchedChar % 256) == 0)
		{
			res = i;
			break ;
		}
		i++;
	}
	if (res == -1 && string[i] == seqrchedChar)
		return ((char *)(string + i));
	if (res == -1)
		return (NULL);
	else
		return ((char *)(string + res));
}

/*
#include<stdio.h>
int main()
{
        const char *str="La cabane de mani";
        int     search = 'u';
        printf("indice : %s",ft_strchr(str,search));
}*/
