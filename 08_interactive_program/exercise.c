#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Interactive console program Chapter 4, Exercise 4.19
    int choice;
    do {
        printf("\n--- Simple Calculator Menu ---\n");
        printf("1. Display Welcome\n");
        printf("2. Calculate Square of a Number\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
        case 1:
            printf("Hello! welcome to interactive program.\n");
            break;
        case 2:{
            int num;
            printf("Enter integer: ");
            scanf("%d", &num);
            printf("Square: %d\n", num * num);
            break;

        }
        case 3:
            printf("Existing application...\n");
            break;
        default:
            printf("Invalid selection. Try again.\n");
        }
    }while (choice != 3);





    return 0;
}
