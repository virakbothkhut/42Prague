/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:32:23 by msmiesko          #+#    #+#             */
/*   Updated: 2023/09/28 17:50:09 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	length;

	index = 0;
	length = 0;
	while (src[length])
	{
		length++;
	}
	if (size <= 0 || dest == NULL)
	{
		return (length);
	}
	while (src[index] && index < size - 1)
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (length);
}

// int	main(void)
// {
// 	char			destination[10];
// 	unsigned int	copied_len;

// 	char source[] = "This is a long string";
// 	copied_len = ft_strlcpy(destination, source, sizeof(destination));
// 	printf("Copied String: %s\n", destination);
// 	printf("Length of Copied String: %u\n", copied_len);
// 	return (0);
// }
