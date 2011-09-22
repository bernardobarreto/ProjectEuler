#include <stdio.h>
long double fatorial(long double n);
int main ()
{
    long double number = 100;
    long double fat = fatorial(number);
    printf("%Lf\n", fat);
}
long double fatorial (long double n)
{
    if(n==1)
        return n;
    return fatorial(n-1) * n;
}
