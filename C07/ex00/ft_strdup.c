/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:05:26 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/25 16:43:57 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;
	int		i;

	if (src == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*original;
// 	char	*duplicate;
// 	int		length;

// 	original = "Hello World";
// 	printf("Original string: %s\n", original);
// 	length = ft_strlen(original);
// 	printf("Length of the string: %d\n", length);
// 	duplicate = ft_strdup(original);
// 	if (duplicate != NULL)
// 	{
// 		printf("Duplicate string: %s\n", duplicate);
// 		free(duplicate);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed for duplicate string. \n");
// 	}
// 	return (0);
// }
