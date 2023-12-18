void ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, s++,1);
    }
}

// int main (void)
// {
//     char *s = "Hello world";
//     ft_putstr_fd(s,1);
//     return (0);
// }