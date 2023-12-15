/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:54:07 by vkhut             #+#    #+#             */
/*   Updated: 2023/11/26 03:34:14 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (((unsigned char)(*s1) - (unsigned char)(*s2)));
}

// int	main(void)
// {
// 	int	result1;
// 	int	result2;
// 	int	result3;

// 	const char str1[] = "Hello, World!";
// 	const char str2[] = "Hello, C!";
// 	const char str3[] = "Hello, Universe!";
// 	result1 = ft_strncmp(str1, str2, 5);
// 	printf("Comparison 1: %d\n", result1);
// 	result2 = ft_strncmp(str1, str3, 8);
// 	printf("Comparison 2: %d\n", result2);
// 	result3 = ft_strncmp(str2, str3, 15);
// 	printf("Comparison 3: %d\n", result3);
// 	return (0);
// }
