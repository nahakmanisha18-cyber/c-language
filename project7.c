#include<stdio.h>

float cal(){
        int choice, a, b;

    do {
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Calculator closed.\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &a);

        printf("Enter the second number: ");
        scanf("%d", &b);

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is: %d\n", a, b, a + b);
                break;

            case 2:
                printf("Subtraction of %d and %d is: %d\n", a, b, a - b);
                break;

            case 3:
                printf("Multiplication of %d and %d is: %d\n", a, b, a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Division of %d and %d is: %d\n", a, b, a / b);
                else
                    printf("Cannot divide by zero \n");
                break;

            case 5:
                printf("Remainder of %d divided by %d is: %d\n", a, b, a % b);
                break;

            default:
                printf("Invalid Choice \n");
        }

    } while (choice != 0);
}

int main()
{
	//Calculator :
	cal();
	
}
/*
Output :

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit


Enter your choice: 1
Enter the first number: 10
Enter the second number: 15
Addition of 10 and 15 is: 25

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit

Enter your choice: 2
Enter the first number: 50
Enter the second number: 20
Subtraction of 50 and 20 is: 30

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit

Enter your choice: 3
Enter the first number: 10
Enter the second number: 10
Multiplication of 10 and 10 is: 100

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit

Enter your choice: 4
Enter the first number: 100
Enter the second number: 10
Division of 100 and 10 is: 10

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 0
Cannot divide by zero

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit

Enter your choice: 4
Enter the first number: 0
Enter the second number: 10
Division of 0 and 10 is: 0

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit

Enter your choice: 5
Enter the first number: 25
Enter the second number: 5
Remainder of 25 divided by 5 is: 0

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit

Enter your choice: 6
Enter the first number: 10
Enter the second number: 10
Invalid Choice 

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit

Enter your choice: 0
Calculator closed.

*/
