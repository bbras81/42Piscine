/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:45:44 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/04 17:36:56 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	size;

	count = 0;
	size = max - min;
	*range = NULL;
	if (min >= max)
		return (0);
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	while (count < size)
	{
		(*range)[count] = min;
		count ++;
		min ++;
	}
	return (size);
}
/*
#include <stdio.h>
int	main()
{
	int	i;
	int	**arr = (int **)malloc(sizeof(int *));
	int	size;

	i = 0;
	size = ft_ultimate_range(arr,10, 200);
	while (i < size)
	{
		printf("%d ", arr[0][i]);
		i++;
	}
	printf("\nsize = %d\n", size);
	free (arr[0]);
	free (arr);
	return (0);
}*/
