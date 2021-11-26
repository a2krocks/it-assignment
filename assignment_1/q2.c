/* 

    Question : WAP to check wether a number is even or odd.
    
    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/


#include <stdio.h>
int main()
{

    int a;
    printf("Enter a number : ");
    scanf("%d", &a); 

    switch (a % 2 )
    {
    case 0:
        printf("%d is Even Number \n", a);
        break;
    default:
         printf("%d is Odd Number \n", a);
        break;
    }

    return 0;
}