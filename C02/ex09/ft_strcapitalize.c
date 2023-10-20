/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:48:58 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/14 17:45:37 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	check_all(char c)
{
	if (lower(c) || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)

{
	char	*ptr;

	ptr = str;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if (str == ptr || !check_all(*(str - 1)))
			{
				if (*str >= 'a' && *str <= 'z')
					*str = *str - 32;
			}
			else if (check_all(*(str - 1)) && *str >= 'A' && *str <= 'Z')
				*str = *str + 32;
		}
		str++;
	}
	return (ptr);
}
/*int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *ptr = ft_strcapitalize(str);
	printf("%s\n", str);
}
*/