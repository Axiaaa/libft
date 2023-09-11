char *strchr(const char * string, char searchedChar )
{
    int i;

    i = -1;

    while (string[i])
        if (string[++i] == searchedChar)
            return string[i];
    return (char *)0;
}