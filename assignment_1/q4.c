/* 

    Question : WAP to find a year is leap-year or not.
    
    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/
#include <stdio.h>
int main()
{

    int x;
    printf("Enter a Year : ");
    scanf("%d", &x);

    if (x % 400 == 0)
    {
        printf("%d is a leap year.", x);
    }
    else if (x % 100 == 0)
    {
        printf("%d is not a leap year.", x);
    }
    else if (x % 4 == 0)
    {
        printf("%d is a leap year.", x);
    }
    else
    {
        printf("%d is not a leap year.", x);
    }

    return 0;
}