/* 

    Question : WAP to find the factorial of any given number.
    
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

    int result = 1; 
    for ( int i = 1; i <=a; i++) {
        result *= i; 
    }

    printf("Factorial of %d is %d\n",a ,  result);

    return 0;
}