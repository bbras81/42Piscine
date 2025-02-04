/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:19:22 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/22 16:24:58 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] < 65 || str[count] > 90)
			return (0);
		count ++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	int result;

	char *str = "WERA3S";

	result = ft_str_is_uppercase(str);
	printf("%d", result);
}*/
