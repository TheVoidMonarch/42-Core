#include <stdlib.h>
#include <string.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    char *new_str;
    size_t i;

    if (!s || !f)
        return NULL;

    new_str = (char *)malloc(strlen(s) + 1);
    if (!new_str)
        return NULL;

    i = 0;
    while (s[i]) {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';

    return new_str;
}
