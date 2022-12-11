/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 22:08:03 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/07 21:57:59 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	char			*res;
	int				i;

	if (s == NULL)
		return (NULL);
	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
char addOne(unsigned int i, char c)
{
	return ( i+c);
}

#include <stdio.h>
int main(void)
{
	char *res;
	printf("resultats %s",ft_strmapi("0123456",addOne));
}*/
