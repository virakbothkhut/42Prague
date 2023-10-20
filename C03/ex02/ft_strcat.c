/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:46:10 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/15 21:44:48 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>	
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	str1[50] = "You are ";
// 	char 	str2[] = "gorgeous!!!";
// 	ft_strcat(str1, str2);

// 	printf("Hey !!! %s\n", str1);
// 	return (0);
// }