
#include "libft.h"

static size_t	char_check(char const *str, char const c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (*(s1 + start) && char_check(set, *(s1 + start)))
		start++;
	end = ft_strlen	(s1);
	while (end > start && char_check(set, *(s1 + (end - 1))))
		end--;
	trim = str_new(end - start);
	if (!trim)
		return (NULL);
	i = 0;
	while ((start + i) < end)
	{
		*(trim + i) = *(s1 + (start + i));
		i++;
	}
	*(trim + i) = '\0';
	return (trim);
}

int	main(void)
{
	char *original = "   Hello, C!            ";
	char *set = " ";

	char *trimmed = ft_strtrim(original, set);

	if (trimmed != NULL)
	{
		printf("Original: \"%s\"\n", original);
		printf("Trimmed: \"%s\"\n", trimmed);
		free(trimmed); // Free the allocated memory
	}
	else
	{
		printf("Trimming failed.\n");
	}
	return (0);
}