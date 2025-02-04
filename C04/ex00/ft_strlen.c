/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:18:26 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/27 14:25:52 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count ++;
		str ++;
	}
	return (count);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "Hello World";
	printf("ft: %d",ft_strlen(str));
	printf("og: %lu",strlen(str));
}*/
