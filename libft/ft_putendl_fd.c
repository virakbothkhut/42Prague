void ft_putendl_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
    write(fd, "\n", 1);
}

int main ()
{
    char *s =  "Hello world";
    int fd = 1;

    ft_putendl_fd(s, fd);
    return (0);
}