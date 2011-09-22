#include <stdio.h>
int is_prime(int num);
int main()
{
    long double number = 0;
    long double sum = 0;

    while (number < 2000000)
    {
        number++;
        if (is_prime(number))
        {
            sum += number;
        }
    }
    printf("%Lf\n", sum-1);
}

int is_prime(int num)
{
    int i;
    for (i=2; i<num/2+1; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
