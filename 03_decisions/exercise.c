#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Category 3:Decision Chapter 3 Exercise 3.17
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0){
        printf("%d is positive.\n", number);
    }else if (number < 0){
        printf("%d is negative.\n", number);
    }else {
        printf("The number is zero.\n");
    }
    return 0;
}
