/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:43:42 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/15 22:31:35 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	temp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			temp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					temp = 1;
				i++;
			}
			if (temp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
// char	*ft_strstr(char *str, char *to_find);

// int		main(void)
// {
// 	char	*str;
// 	char	*to_find;

// 	str = "American Standard Code for Information Interchange";
// 	to_find = "for";
// 	printf("%s\n", ft_strstr(str, to_find));
// 	to_find = "";
// 	printf("%s\n", ft_strstr(str, to_find));

// 	to_find = "d C";
// 	printf("%s\n", ft_strstr(str, to_find));

// 	to_find = "I";
// 	printf("%s\n", ft_strstr(str, to_find));
// 	return(0);
// }
