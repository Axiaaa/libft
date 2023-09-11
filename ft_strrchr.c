char *strchr(const char * string, char searchedChar )
{
    int i;

    i = 0;

    while (string[i])
        i++;
    while (i >= 0)
    {
        if (string[--i] == searchedChar)
            return &string[i];
    }
    return (char *)0;
}
