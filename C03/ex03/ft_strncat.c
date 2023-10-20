/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:10:33 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/15 22:18:00 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		nb--;
	}
	*dest_ptr = '\0';
	return (dest);
}

// int main(void)
// {
// 	char str1[50] = "You are absolutely ";
// 	char str2[] = "gorgeous";
// 	unsigned int nb = 3;
// 	ft_strncat(str1,str2, nb);
// 	printf("Hey !!! %s\n", str1);
// 	return (0);
// }
