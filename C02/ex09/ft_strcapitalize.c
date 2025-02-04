/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:45:32 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/22 15:48:40 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strcapitalize(char *str)
{
	int count;

	count = 0;
	if (str[count] >= 97 && str[count] <= 122)
		str[count] -= 32;
	//Browse the string
	while (str[count])
	{
		//se for uma letra minuscula
 		if ((str[count] >= 97 && str[count] <= 122))
			if (str[count] - 1 < 'A' || (str[count] - 1 > 'Z' && str[count] - 1 < 'a')|| str[count] - 1 > 'z')
				if ((str[count] - 1 <= 97 && str[count] - 1 >= 122))
					str[count] -= 32;
		count ++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(str));
}
