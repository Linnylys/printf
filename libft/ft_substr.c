/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:44:13 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/13 23:07:17 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stddef.h>
#include<stdlib.h>
#include "libft.h"

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

char	*special_case(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if ((int)start > len_s)
	{
		str = special_case();
		return (str);
	}
	str = malloc(sizeof(char) * (ft_min(len, len_s) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (++i < (int)len && s[i] != '\0')
	{
		str[i] = s[start + i];
	}
	str[i] = '\0';
	return (str);
}
/*
#include<stdio.h>
int main ()
{
	const char *str2 = "tripouille";
	char *str1;

	str1 = ft_substr(str2,0,42000);
	printf("resultats : %s \n",str1);
}*/
