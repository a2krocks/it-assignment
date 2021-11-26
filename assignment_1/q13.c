/* 

    Question : WAP to print the Fibonacci series upto 10 elements.

    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/

#include <stdio.h>
int main()
{

    int a = 0, b = 1, c, i, number;
    printf("Enter the number :"); // Enter 10 to get 10 fibonacci numbers
    scanf("%d", &number);
    for (i = 0; i < number; i++) 
    {
        c = a + b;
        printf("%d\n", a);
        a = b;
        b = c;
    }
    return 0;
}