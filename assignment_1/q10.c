/* 

    Question : WAP to print the series: 2, 4, 6, 8, ----------------.
    
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

    printf("Required Series are : \n");
    for (int i = 0, j = 0; i < l; i++)
    {
        j += 2;
        printf("%d\n", j);
    }
    return 0;
}