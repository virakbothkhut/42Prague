

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    while(n--)
    *(unsigned char *)s++ = 0;
}


// int main()
// {
//     // Example: Initialize a buffer with some data
//     char buffer[11] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};

//     // Display the content of the buffer before zeroing
//     printf("Before: ");
//     for (size_t i = 0; i < sizeof(buffer); i++)
//     {
//         printf("%c ", buffer[i]);
//     }
//     printf("\n");

//     // Use ft_bzero to zero out the buffer
//     ft_bzero(buffer, sizeof(buffer));

//     // Display the content of the buffer after zeroing
//     printf("After: ");
//     for (size_t i = 0; i < sizeof(buffer); i++)
//     {
//         printf("%c ", buffer[i]);
//     }
//     printf("\n");

//     return 0;
// }
