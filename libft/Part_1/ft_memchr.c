/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:54:19 by vkhut             #+#    #+#             */
/*   Updated: 2023/11/26 04:04:31 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *str, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)str++ == (unsigned char)c)
			return ((void *)(unsigned char *)str - 1);
	}
	return (NULL);
}

// int	main(void)
// {
// 	void	*result1;

// 	const unsigned char memoryBlock[] = {10, 20, 30, 40, 100};
// 	result1 = ft_memchr(memoryBlock, 10, 2);
// 	if (result1 != NULL)
// 	{
// 		printf("Value 100 found at position: %ld\n", (unsigned char *)result1
// 			- memoryBlock);
// 	}
// }
