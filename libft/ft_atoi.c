#include "libft.h"

static int check_space(int c)
{
    if ((c > 8 && c < 14) || (c == 32))
    return (1);
    return (0);
}

static  int check_digit(int c)
{
    if (c > 47 && c < 58 )
    return (1);
    return (0);
}

int ft_atoi(char const *str)
{
    long long int n;
    long long int check;
    int sign;

    n = 0;
    sign = 1;
    while (*str && check_space(*str))
    str++;
    if (*str == 45 || *str == 43)
    {
        if (*str == 45)
        sign *= -1;
        str++;
    }
    while (*str && check_digit(*str))
    {
        check = n;
        n = n * 10 + sign * (*str - 48);
        if(n > check && sign < 0)
        return (0);
        if (n <  check && sign > 0)
        return (-1);
        str++;
    }
    return (n);
}

int main() {
    // Example 1: Basic positive integer
    char str1[] = "12345";
    printf("Result 1: %d\n", ft_atoi(str1));  // Output: 12345

    // Example 2: Negative integer with whitespace
    char str2[] = "  -6789";
    printf("Result 2: %d\n", ft_atoi(str2));  // Output: -6789

    // Example 3: Overflow scenario
    char str3[] = "2147483647";  // Beyond INT_MAX
    printf("Result 3: %d\n", ft_atoi(str3));  // Output: 0

    // Example 4: Underflow scenario
    char str4[] = "-2147483647";  // Below INT_MIN
    printf("Result 4: %d\n", ft_atoi(str4));  // Output: -1

    return 0;
}
