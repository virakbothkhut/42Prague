#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
 unsigned int i;

 i =0;
 while (*s)
 {
    (*f)(i,s);
    i++;
    s++;
 }
}

// void printchar(unsigned int index, char *c)
// {
//     printf("Character at index %u:  %c\n", index, *c);
// }

// int main()
// {
//     char *str = "Hello world";
//     ft_striteri(str, printchar);
// }