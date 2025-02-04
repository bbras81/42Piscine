/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:46:35 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/21 09:51:37 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

/*
#include <stdio.h>
int main(void)
{
	int nbr_a = 42;
	int nbr_b = 34;
	printf("A=%d ", nbr_a);
	printf("b=%d ", nbr_b);

	ft_swap(&nbr_a, &nbr_b);

	printf("A=%d ", nbr_a);
	printf("b=%d ", nbr_b);
}*/
