/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:41:39 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/13 18:49:02 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void){
//     char source[] = "Hello, World!";
//     char destination[20]; 

//     ft_strcpy(destination, source);

//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return 0;
// }