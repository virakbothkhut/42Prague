/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:51:31 by vkhut             #+#    #+#             */
/*   Updated: 2023/10/20 12:11:55 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strjoin(char const *s1, char const *s2)

{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		result[len1 + i] = s2[i];
		i++;
	}
	return (result);
}

// int	main(void)

// {
// 	const char *s1 = "Hello, ";
// 	const char *s2 = "World";

// 	char *result = ft_strjoin(s1, s2);

// 	if (result != NULL)
// 	{
// 		printf("concate two str:  %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Failed to allocate memory for the concatenated string  \n");
// 	}
// 	return (0);
// }
