/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:07:10 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/21 11:18:26 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count ++;
	}
	return (count);
}
/*
#include <stdio.h>

int main()
{
	char *str = "Hello World!";
	int len;	

	len = ft_strlen(str);

	printf("strlen = %d\n", len);
	return (0);
}
*/
