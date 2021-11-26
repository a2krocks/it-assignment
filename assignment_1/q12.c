/* 

    Question : WAP to count the number of digits of any given number.

    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/
#include <stdio.h>

int main()
{
    int l;
    printf("Enter a number : \n");
    scanf("%d", &l);

    int i = 0; 
    int n = l; 
    do
    {
        n = n / 10;
        i++;  
    } while (n != 0);
    
    printf("No of digits in %d is/are %d. \n", l, i); 

    return 0;
}