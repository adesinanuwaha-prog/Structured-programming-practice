#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Category 6: Loop with user input Chapter 3, Exercise 3.18
     int totalStudents;
     double score, grandTotal = 0.0;

     printf("Enter total number of students: ");
     scanf("%d", &totalStudents);

     for (int i = 1; i<= totalStudents; i++) {
        printf("Enter score for student %d: ", i);
        scanf("%lf", &score);
        grandTotal += score;
     }

      printf("Total combined score: %.2f\n", grandTotal);
    return 0;
}
