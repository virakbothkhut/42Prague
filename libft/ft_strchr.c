
#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

// int	main(void)
// {
// 	char	ex1;
// 	char	ex2;
// 	char	*result;

// 	const char hey[] = "Hello World";
// 	result = ft_strchr(hey, 'd');
// 	printf("%ld\n", result - hey);
// }
