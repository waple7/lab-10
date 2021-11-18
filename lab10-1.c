#include <stdio.h>


int NOD(int number_1, int number_2)

{
    while (number_1 != number_2){
        if (number_1 > number_2){
            number_1 -= number_2;
        } else {
            number_2 -= number_1;
        }
    }
    return number_2;
}

int NOK(int number_1, int number_2){
    return (number_1 * number_2)/NOD(number_1, number_2);
}

int main(){
    int number_1, number_2;

    printf("number_1:");
    scanf("%d", &number_1);

    printf("number_2:");
    scanf("%d", &number_2);


    printf("NOK:%d",NOK(number_1, number_2));
    printf("\nNOD:%d", NOD(number_1, number_2));

    return 0;
}