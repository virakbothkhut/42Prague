

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    void *str_ptr;
    str_ptr = str;
    while (n--)
        *(unsigned char *)str++ = (unsigned char)c;
    return (str_ptr);
}

// int main(void)
// { 
//     char myString[5];

//     // Using ft_memset to set the array elements to 'X'
//     ft_memset(myString, 'X', sizeof(myString));

//     // Print the result
//     printf("Result: %s\n", myString);

//     return 0;
// }
