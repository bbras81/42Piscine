/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:56:06 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/22 16:11:46 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (str[count] < 'A' || (str[count] > 'Z' && str[count] < 'a')
			|| str[count] > 'z')
			return (0);
		count ++;
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
  int teste = ft_str_is_alpha("");
  printf("%d", teste);
}*/
