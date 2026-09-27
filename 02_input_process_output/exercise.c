#include <stdio.h>
#include <stdlib.h>

int main()
{
     //category 2:Input - Process -Output Chapter 2, Exercise 2.16
    int num1, num2, sum, product;
    printf("Enter num1:");
    scanf("%d", &num1);
    printf("Enter num2:");
    scanf("%d", &num2);
    sum = num1 + num2;
    product = num1 * num2;

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    return 0;
}
