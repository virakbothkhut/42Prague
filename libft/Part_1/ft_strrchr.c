/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:53:57 by vkhut             #+#    #+#             */
/*   Updated: 2023/11/26 03:11:33 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char const	*aux;

	aux = NULL;
	while (*str)
	{
		if (*str == (char)c)
			aux = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)aux);
}
// int	main(void)

// {
// 	char *result;

// 	const char exampleString[] = "Hello, World!";
// 	result = ft_strrchr(exampleString, 'o');
// 	if (result != NULL)
// 	{
// 		printf("Character 'o' found at position: %ld\n", result
// 			- exampleString);
// 	}
// 	else
// 	{
// 		printf("Character 'o' not found in the string.\n");
// 	}
// 	return (0);
// }
