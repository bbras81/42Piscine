/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:35:28 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/22 16:26:40 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] <= 31 || str[count] == 127)
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

	char *str = "n";

	result = ft_str_is_printable(str);
	printf("%d", result);
}*/
