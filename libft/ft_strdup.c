/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:02:56 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/09 00:13:52 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>
#include"libft.h"

char	*ft_strdup(const char *source)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) malloc((ft_strlen(source) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (source[i] != '\0')
	{
		str[i] = source[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <string.h>
#include<stdio.h>
int main ()
{
	char str[] ="hello dear gcvv";
	char *str1;
	char *str2;

	str1 = ft_strdup(str);
	str2 = strdup(str);
	
	printf("Ma fonction :%s \nVrai fonction :%s",str1,str2);

}*/
