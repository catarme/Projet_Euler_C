#include <stdio.h>

int main(int argv, char *argc[])
{
    long int n = 600851475143;
    int i = 2;

    while ((i * i) < n)
    {
        while ((n % i) == 0)
            n /= 1;
        i++;
    }

    printf("%li", n);
    return 0;
}
