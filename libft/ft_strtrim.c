/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:20:18 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/07 21:44:41 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stddef.h>
#include<stdlib.h>
#include"libft.h"

int	index_strim_beg(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (set[j])
		{
			if ((s1[i] - set[j]) == 0)
				flag = 1;
			j++;
		}
		if (flag == 0)
			break ;
		i++;
	}
	return (i);
}

int	index_strim_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len_s1;
	int	len_set;
	int	flag;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	i = 0;
	while (i < len_s1)
	{
		j = 0;
		flag = 0;
		while (j < len_set)
		{
			if ((s1[len_s1 - i - 1] - set[len_set - j - 1]) == 0)
				flag = 1;
			j++;
		}
		if (flag == 0)
			break ;
		i++;
	}
	return (len_s1 - i - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (s1 == NULL)
		return (NULL);
	i = index_strim_beg(s1, set);
	j = index_strim_end(s1, set);
	k = 0 ;
	if (j < 0)
		str = malloc(sizeof(char));
	else
	{
		str = malloc((j - i + 2) * sizeof(char));
		if (str == NULL)
			return (NULL);
		while (k + i <= j)
		{
			str[k] = s1[i + k];
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}
/*
#include<stdio.h>
int main ()
{
	char *str = "   xxx   xxxx";
	char *sep = " x";
	char *str2;
	int	deb;
	int	end;

	deb = index_strim_beg(str,sep);
	end = index_strim_end(str,sep);
	str2 = ft_strtrim(str,sep);
	printf("index deb: %d \n",deb);
	printf("index end: %d \n",end);
	printf("resultats %s",str2);

}*/
