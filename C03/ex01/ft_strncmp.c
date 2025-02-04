/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:44:19 by brunmigu          #+#    #+#             */
/*   Updated: 2025/01/30 14:37:07 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && (*s1 || *s2))
	{
		if (!(*s1 == *s2))
			return (*s1 - *s2);
		s1 ++;
		s2 ++;
		count++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main() {
  char str1[] = "Ol!";
  char str2[] = "Olnd ";
  unsigned int len;
  len = 4;

  printf("ft: %d", ft_strncmp(str1, str2, len));
  printf("og: %d", strncmp(str1, str2, len));
}*/
