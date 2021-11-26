/* 

    Question : WAP to print the pattern:
                *
                * *
                * * *
                * * * *

    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/

#include <stdio.h>
int main()
{

    int n = 4; 
    for (int i = 0; i < n; i++) 
    {
        for ( int j = 0 ; j < i; j++) {
            printf("*"); 
        }
        printf("*\n"); 
    }
    return 0;
}