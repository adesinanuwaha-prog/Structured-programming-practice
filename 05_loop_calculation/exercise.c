#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Category 5: Loop with calculation Chapter 4,Exercise 4.12
    int limit, total = 0;
    printf("Enter upper limit (N): ");
    scanf("%d", &limit);

    int i = 1;
    while (i<=limit){
        total +=i;
        i += 2; //increment by 2 to get odd numbers
    }
    printf("Total of odd numbers up to %d is: %d\n", limit, total);

    return 0;
}
