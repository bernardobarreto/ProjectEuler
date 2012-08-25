// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <stdio.h>
#include <math.h>

int main() {
    long double sum_square = 0;
    long double square_sum = 0;

    int i;
    while (i <= 100) {
        sum_square = sum_square + pow(i, 2);
        square_sum = square_sum + i;
        i++;
    }

    square_sum = pow(square_sum, 2);

    printf("square_sum: %Lf\n", square_sum);
    printf("sum_square: %Lf\n", sum_square);
    printf("answer: %Lf\n", square_sum - sum_square);
}

