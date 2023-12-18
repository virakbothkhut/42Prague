#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long int n_l = n;

    if (n_l < 0)
    {
    ft_putnbr_fd('-', fd);
    n_l = -n_l;
    }
    if (n_l > 9)
    {
    ft_putnbr_fd(n_l/10, fd);
    ft_putnbr_fd(n_l%10, fd);
    }
    else
    {
    ft_putnbr_fd(n_l+ '0', fd);
    }
}

// int main ()
// {   
//     int n = 42;
//     ft_putnbr_fd(n, 1);
//     return (0);
// }
