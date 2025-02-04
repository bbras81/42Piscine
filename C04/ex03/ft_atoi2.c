/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:47:10 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/03 10:58:48 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space_count(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '-' && str[count] != '+')
	{
		if (!(str[count] >= 9 && str[count] <= 13) && str[count] != ' ')
			return (0);
		count ++;
	}
	return (count);
}

int	ft_atoi(char *str)
{
	int	count;
	int	minus;
	int	result;

	count = is_space_count(str);
	minus = 1;
	result = 0;
	while (!(str[count] >= '0' && str[count] <= '9'))
	{
		if (str[count] != '+' && str[count] != '-')
			return (0);
		if (str[count] == '-')
			minus *= -1;
		count ++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		result += (str[count]) - '0';
		result *= 10;
		count ++;
	}
	return (result / 10 * minus);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_atoi("\n  ----+-+1234ab567"));
	return (0);
}*/
