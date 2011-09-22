#include <stdio.h>
int is_prime();

int main()
{
    int counter = 0;
    int number = 2;
    while (counter != 10001)
    {
        if (is_prime(number))
        {
            counter++;
        }
        number++;
    }
    printf("%d\n", number-1);
}

int is_prime(int n)
{
    int i;
    for (i=2; i<n/2+1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;

}
