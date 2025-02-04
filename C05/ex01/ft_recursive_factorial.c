/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:17:39 by brunmigu          #+#    #+#             */
/*   Updated: 2025/02/03 15:05:20 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb <= 0)
		return (0);
	return (nb * ft_recursive_factorial(nb -1));
}
/*#include <stdio.h>
int main()
{
	int nbr = 5;

	printf("%d",ft_recursive_factorial(nbr));
	return (0);
}*/
