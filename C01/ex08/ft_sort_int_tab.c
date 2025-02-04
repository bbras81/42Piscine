/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:20:47 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/21 14:13:34 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	swap;
	int	buffer;
	int run;

	count = 0;
	swap = 0;
	run = 1;
	while (run == 1)
	{
		if (tab[count + 1] < tab[count])
		{
			buffer = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = buffer;
			count ++;
			swap ++;
		}
		else
			count ++;	
		if (count == size -1 && swap == 0)
			run = 0;
		if (count == size -1)
		{
			count = 0;
			swap = 0;
		}
	}
}


#include <stdio.h>

int main (void)
{
	int tab[11] = {80, 39, 104,1143, 2, 7, 21, 12};
	int size;
	size = 8;
	ft_sort_int_tab(tab, size);

	for (int i = 0; i <= size - 1; i++)
	{
		printf("%d,",tab[i]);
	}
}
