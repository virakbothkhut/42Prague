

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *p;

	size *= nmemb;
	p = malloc(size);
	if (p)
		ft_bzero(p, size);
	return (p);
}

// int main()
// {
//     int *numbers = ft_calloc(5, sizeof(int));
//     char *buffer = ft_calloc(10, sizeof(char));
//     int *empty_array = ft_calloc(0, sizeof(int));

//     // Display the allocated and zeroed memory addresses
//     printf("Numbers: %p\n", (void *)numbers);
//     printf("Buffer: %p\n", (void *)buffer);
//     printf("Empty Array: %p\n", (void *)empty_array);

//     // Free the allocated memory
//     free(numbers);
//     free(buffer);
//     free(empty_array);

//     return 0;
// }
