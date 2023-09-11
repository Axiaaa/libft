int *ft_bzero(int *s, unsigned int n)
{
    unsigned int i;

    i = 0;
    
    while ((s[i]) && i < n)
        s[i++] = '\0';
    return (s);
}