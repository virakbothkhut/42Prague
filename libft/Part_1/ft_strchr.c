/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:53:49 by vkhut             #+#    #+#             */
/*   Updated: 2023/11/26 02:39:11 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

// int	main(void)
// {
// 	char	ex1;
// 	char	ex2;
// 	char	*result;

// 	const char hey[] = "Hello World";
// 	result = ft_strchr(hey, 'd');
// 	printf("%ld\n", result - hey);
// }
