#include <stdio.h>

int main(int argv, char *argc[])
{
    int i, o, p, result;

    i = 1;
    o = 2;

    for (int j = 0; i+o < 4000000; j++) 
    {
        p = i + o;
        i = o;
        o = p;

        if (p % 2 == 0)
            result += p;
    }

    printf("%i\n", result);
    return 0;
}