/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:32:31 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/22 16:29:13 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		count ++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "Ola MUNDO!";
	printf("%s", ft_strlowcase(str));
}*/
