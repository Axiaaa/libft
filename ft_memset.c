int *ft_memset(int *s, int c, unsigned int n)
{
    unsigned int i;

    i = 0;
    
    while ((s[i]) && i < n)
        s[i++] = c;
    return (s);
}
