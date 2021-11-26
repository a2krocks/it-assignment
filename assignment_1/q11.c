/* 

    Question : WAP to find the sum of this series: 2, 6, 12, 20, 30, 42, ----------------- (n+n^2)
    
    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/
#include <stdio.h>

int main()
{
    int l;
    printf("Enter the number to terms required : \n");
    scanf("%d", &l);

    int k , sum = 0; 
    printf("Required Series are : \n");
    for (int i = 1;  i <= l; i++)
    {
        k = i + (i * i); 
        sum += k; 
        printf("%d\n", k );
    }

    printf("Sum of the series is %d\n" , sum); 
    return 0;
}