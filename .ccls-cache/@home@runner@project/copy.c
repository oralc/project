#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }

    char *t = malloc(strlen(s) + 1);

    int n = strlen(s);

    for (int i = 0; i<=n; i++)
    {
        t[i] = s[i];
    }

    if (strlen(t) > 0 )
    {
        t[0] = toupper(t[0]);
    }

    for (int i = 0; i < strlen(t); i++)
    {
        printf("%c", t[i]);
    }

    free(t);
    return 0;


}

