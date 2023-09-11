int ft_atoi(char *str)
{
    int i;
    int nb;
    int minus;

    minus = 0;
    i = 0;
    nb = 0;
    while ((str[i] >= 8 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            minus = 1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    if (minus == 1)
        return (-nb);
    return (nb);
}