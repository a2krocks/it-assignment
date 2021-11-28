/* 

    Question : Using switch case write a menu driven program-
                
                * * * MENU * * *
                Enter 1 for ADD
                Enter 2 for SUBTRACTION
                Enter 3 for MULTIPLICATION
                Enter 4 for DIVISION
                Enter your option: -
                Enter 1st no:
                Enter 2nd no:
                Result:
    
    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/

#include <stdio.h>
int main()
{

    int a;
    printf("* * * MENU * * * \nEnter 1 for ADD \nEnter 2 for SUBTRACTION \nEnter 3 for MULTIPLICATION \nEnter 4 for DIVISION\n\n");
    printf("Enter your option: -");
    scanf("%d", &a);

    switch (a < 5 && a > 0)
    {
    case 1:
        float x, y, z;
        printf("Enter 1st no: ");
        scanf("%f", &x);
        printf("Enter 2nd no: ");
        scanf("%f", &y);
        switch (a)
        {
        case 1:
            z = x + y;
            break;
        case 2:
            z = x - y;
            break;
        case 3:
            z = x * y;
            break;
        case 4:
            z = x / y;
            break;
        default:
            printf("Invalid input - %d \n", a);
            break;
        }
        printf("Result: %.2f \n", z);
        break;

    default:
        printf("Invalid input - %d \n", a);
        break;
    }

    return 0;
}