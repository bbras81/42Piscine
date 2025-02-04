/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:56:45 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/04 11:46:14 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*range;
	int	count;
	
	count = 0;
	if (min == max)
		return (0);
	range = malloc((max - min) * 4);
	if (range)
		{
			while (min != max)
			{
				range[count] = min;
				count ++;
				min ++;
			}
		}
	else
		return (0);
	return (range);
}
/*
#include <stdio.h>
int main()
{
	int count = 0;
	int min = 10;
	int max = 20;
	
	int *range = ft_range(min, max);
	
	while (min != max)
	{
		printf("%d\n", range[count]);
		count ++;
		min ++;
	}
	free(range);
	return (0);
}*/
