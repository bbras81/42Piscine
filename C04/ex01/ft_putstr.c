/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:29:12 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/29 16:18:30 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		write (1, &str[count], 1);
		count ++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "Hello World";
	ft_putstr(str);
}*/
