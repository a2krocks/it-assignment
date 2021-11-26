/* 

    Question : WAP to calculate the sum of all digits of any given integer.
    
    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/
#include <stdio.h>
int main()
{

    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    int n = a;
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    printf("Sum  : %d\n", sum);

    return 0;
}