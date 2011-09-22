#include <stdio.h>

int main (){
    int number = 2520;

    int the_answer(num){
        int i;
        for (i=2; i<20; i++){
            if (num % i != 0){
                return 0;
            }
        }
        return 1;
    }

    while (! the_answer(number)){
        number++;
    }
    printf("%d\n", number);
}
