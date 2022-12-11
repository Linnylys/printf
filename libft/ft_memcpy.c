/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:26:55 by lsipile           #+#    #+#             */
/*   Updated: 2022/02/09 20:53:29 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*srcstr;
	unsigned char	*deststr;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	srcstr = (unsigned char *) src;
	deststr = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		deststr[i] = srcstr[i];
		i++;
	}
	return (deststr);
}
