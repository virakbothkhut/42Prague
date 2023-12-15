#include "libft.h"

size_t  wordct(const char *s, char c)
{
    size_t count;

    count = 0;
    while(*s)
    {
        if(*s != c && (*(s+1) != 0 || *(s+1) == c))
        count++;
        s++;
    }
     return (count);
}

char *nextwrd(const char *s, char c, size_t *len)
{
    const char *first;
    while (*s == c)
          s++;
    first = s;
    while (*s && *s != c)
    s++;
    *len = s- first;
    return  ((char *)first);
}

void freeSpace(char **space, size_t i)
{
    while(i--)
    free(space[i]);
    free(space);
}

char **ft_split (const char *s, char c)
{
    char **arr;
    size_t words;
    size_t len;
    size_t i;

    arr = (char **)malloc((wordct(s,c)+ 1) * sizeof(char *));
    if (!s  || !arr)
    return (NULL);

    words  = wordct(s,c);
    i = 0;
    while (i< words)
    {
        s = nextwrd(s, c, &len);
        arr[i] = (char*)malloc((len+1)* sizeof(char));
        if (!arr[i])
        {
            freeSpace(arr,i);
            return (NULL);
        }
        ft_strlcpy(arr[i],s, len+1);
        s += len;
        i++;
    }
    arr[words] = NULL;
    return (arr);

}

// int main(void)
// {
//     const char *string = "This is a sample";
//     char **result = ft_split(string, ' ');

//     if (result == NULL)
//     {
//         printf("Error: Memory allocation failed.\n");
//         return 1; // Indicate failure with a non-zero exit code
//     }

//     printf("Split words:\n");
//     for (size_t i = 0; result[i] != NULL; i++)
//     {
//         printf("%s\n", result[i]); // Corrected format specifier
//     }

//     // Assuming you have a wordct function
//     freeSpace(result, wordct(string, ' '));

//     return 0;
// }