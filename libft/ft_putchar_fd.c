/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsipile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:45:00 by lsipile           #+#    #+#             */
/*   Updated: 2022/01/16 21:10:02 by lsipile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main()
{
	//FILE * fd;
	int fd;
	fd = open("test.txt","O_APPEND");
	ft_putchar_fd('a',fd);
}*/
