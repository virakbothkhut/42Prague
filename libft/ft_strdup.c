
#include "libft.h"

char *ft_strdup(const char *s)
{
    char *pointer;
    int i;
    int u;

    i = 0;
    u = (int)ft_strlen(s);
    pointer = malloc(sizeof(char)*u + 1);
    if (pointer == NULL)
        return (NULL);
    while (s[i])
    {
        pointer[i] = s[i];
        i++;
    }
    pointer[i] = '\0';
    return (pointer);
}

// int main()
// {
//     const char *originalString = "Hello, World";
//     char *duplicateString = ft_strdup(originalString);

//     if (duplicateString == NULL)
//     {
//         return (1);
//     }
//     printf("Original String: %s\n", originalString);
//     printf("Duplicated String: %s\n", duplicateString);
    
//     free(duplicateString);
//     return 0;
// }