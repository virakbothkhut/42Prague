/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:04:12 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/26 18:56:36 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	len_dest = j;
	len_src = ft_strlen(src);
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	while (src [i] != '\0' && i < size - len_dest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len_dest + len_src);
}

// int	main(void)
// {
// 	int				result;
// 	char			dest[] = "abc";
// 	char			src[] = "123";
// 	unsigned int	size = 9;

// 	result = ft_strlcat(dest, src, size);
// 	printf("%d", result);
// }
