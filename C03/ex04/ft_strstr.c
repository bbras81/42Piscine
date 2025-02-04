/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:07:46 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/27 10:10:06 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			count = 1;
			while (to_find[count] && str[count] == to_find[count])
				count ++;
			if (!to_find[count])
				return (str);
		}
		str ++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *str1 = "Ola mundo";
	char *find = 	"mundo";
//	char *resultado1 = strstr(str1, find);
	printf("%s",ft_strstr(str1, find));
}*/
