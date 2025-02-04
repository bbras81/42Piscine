/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:20:47 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/21 12:53:14 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	arr_pos;
	int	buffer;

	count = 0;
	arr_pos = size -1;
	if (size % 2 == 0)
	{
		size = size / 2 - 1;
	}
	else
	{
		size = size / 2;
	}
	while (count != size)
	{
		buffer = tab[count];
		tab[count] = tab[arr_pos];
		tab[arr_pos] = buffer;
		count ++;
		arr_pos --;
	}
}

/*
#include <stdio.h>

int main (void)
{
	int tab[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11};
	int size;
	size = 11;
	ft_rev_int_tab(tab, size);

	for (int i = 0; i <= size; i++)
	{
		printf("%d",tab[i]);
	}

}*/
