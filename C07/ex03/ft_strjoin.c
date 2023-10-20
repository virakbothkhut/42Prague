/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:35:42 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/25 17:35:03 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_cancating(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result_p;
	int		words;
	int		idex_str;

	idex_str = 0;
	words = 0;
	result_p = (char *)malloc(sizeof(char) * (size * 2 - 1 + 2));
	result_p[0] = '\0';
	if (size == 0)
		return (malloc(sizeof(char)));
	while (words < size * 2 - 1)
	{
		if (words % 2 == 0)
		{
			result_p = ft_cancating(result_p, strs[idex_str]);
			idex_str++;
		}
		else
		{
			result_p = ft_cancating(result_p, sep);
		}
		words++;
	}
	return (result_p);
}

// int	main(void)
// {
// 	char *words[] = {"Hello", "World", "OpenAI", ""};
// 	char *separator = ", ";
// 	int num_words = 4;

// 	char *result = ft_strjoin(num_words, words, separator);

// 	if (result != NULL)
// 	{
// 		printf("Concatenated String: %s\n", result);
// 		free(result); // Don't forget to free the memory when done
// 	}
// 	else
// 	{
// 		printf("Error: Memory allocation failed.\n");
// 	}

// 	return (0);
// }