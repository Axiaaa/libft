int ft_isascii(char c)
{
    if (((unsigned) c) < 128) 
        return (1);
    return (0);
}
