#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Category 7: Loop with decision Chapter 3 Exercise 3.22
    int count, grade;
    int passes = 0, fails = 0;

    printf("How many grades will you enter? ");
    scanf("%d", &count);

    for (int i = 1; i<= count; i++){
        printf("Enter grade %d:", i);
        scanf("%d", &grade);

        if (grade >= 50){
            passes ++;
        }else{
            fails++;
        }
    }
    printf("Passes: %d | Fails: %d\n", passes, fails);
    return 0;
}
