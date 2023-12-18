#include "libft.h"

int countlen(int n)
{
    size_t count;

    count = 0;
    if(n <= 0)
    ++count;
    
    while(n)
    {
        ++count;
        n /= 10;
    }
    return (count);
}

char *ft_itoa(int n)
{
    char *ptr;
    long long nbr;
    int len;

    nbr = n;
    len =  countlen(n);
    ptr = (char*)malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
        return (NULL);

    if (nbr < 0)
    {
        nbr = -nbr;
        ptr[0] = '-';
    }
    else if (nbr == 0)
        ptr[0] = '0';
    ptr[len] = '\0';
    while(nbr)
    {
        ptr[--len]= nbr % 10 + '0';
        nbr /= 10;
    }
    return (ptr);
}

// int main() {
//     int num1 = 123;
//     int num2 = -456;
//     int num3 = -2147483648;

//     char *str1 = ft_itoa(num1);
//     char *str2 = ft_itoa(num2);
//     char *str3 = ft_itoa(num3);

//     if (str1 && str2 && str3) {
//         printf("Number 1: %s\n", str1);
//         printf("Number 2: %s\n", str2);
//         printf("Number 3: %s\n", str3);

//         free(str1);
//         free(str2);
//         free(str3);
//     } else {
//         fprintf(stderr, "Memory allocation error.\n");
//     }

//     return 0;
// }
