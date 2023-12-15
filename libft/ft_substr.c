/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:25:06 by vkhut             #+#    #+#             */
/*   Updated: 2023/10/24 17:14:30 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fr_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(len + 1);
	if (str == NULL)
	{
		exit(1);
	}
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i - 1];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	const char		*str1;
	unsigned int	start;
	size_t			length;
	char			*substr;

	str1 = "geeks";
	start = 3;
	length = 3;
	substr = fr_substr(str1, start, length);
	if (substr != NULL)
	{
		printf("original string: %s\n", str1);
		printf("substring: %s\n", substr);
		free(substr);
	}
	else
	{
		printf("Failed to allocate memory for the substring \n");
	}
	return (0);
}
