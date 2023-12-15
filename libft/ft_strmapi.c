#include "libft.h"

char *strnew(size_t n)
{
    char *str;
    str = (char*)malloc(sizeof(char) * (n + 1));
    if (!str)
        return (NULL);
    return (str);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *str;

    if (!s || !f)
        return NULL;

    if (!(str = strnew(ft_strlen(s))))
        return NULL;

    i = 0;
    if (s && f)
    {
        while (s[i] != '\0')
        {
            str[i] = (*f)(i, s[i]);
            i++;
        }
    }
    str[i] = '\0';
    return str;
}

char uppercase(unsigned int i, char c)
{
    if (i % 2 == 0)
        return toupper(c);
    else
        return tolower(c);
}

int main ()
{
    const char *str = "Hey new function";
    char *modified = ft_strmapi(str, uppercase);

    printf("Original String: %s\n", str);
    printf("Modified: %s\n", modified);

    free (modified);
    return (0);
}
