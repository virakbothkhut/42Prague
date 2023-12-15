
#include "libft.h"

char *ft_strnstr(char const *haystack, char const *needle, size_t n)
{
    size_t j;

    if (!haystack && !n)
    return (NULL);    
    if (!*needle)
    return ((char *)haystack);
while (*haystack && n--)
{
    j = 0;
    while (*(haystack + j) == *(needle + j)
     && *(needle + j) && j <= n)
    {
        if (!*(needle + j + 1))
        return ((char *)haystack);
    j++;
    }
    haystack++;
}
return (NULL);
}

// int main(void)

// {
//     char str[] = " Hello, World!";
//     char sub[] = "";
//     char *result = ft_strnstr(str, sub, sizeof(str));


//     if (result)
//     {
//         printf("Substring found at position: %d\n", result - str);
//         printf("Result: %s\n", result);
//     }
//     else
//     {
//         printf("Substring not found \n");
//     }
    
// }