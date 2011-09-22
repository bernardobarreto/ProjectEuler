#include <stdio.h>

int main (){
    int first = 1;
    int second = 2;
    int sum = 0;
    int sumfibo;

    while (second <= 4000000){
        if (second % 2 == 0){
            sum += second;
        }
        sumfibo = first + second;
        first = second;
        second = sumfibo;
    }
    printf("%d\n", sum);
}
