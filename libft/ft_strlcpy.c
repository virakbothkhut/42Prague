

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int len;

	len = 0;
	while (*(src + len) && --size)
		*dest++ = *(src + len++);
	*dest = '\0';
	while (*(src + len))
		++len;
	return (len);
}

// int	main(void)
// {
// 	char src[] = "Hello";
// 	char dest[6];
// 	size_t d = ft_strlcpy(dest, src, sizeof(dest));

// 	printf("%s\n", dest);
// 	printf("%d", d);
// }