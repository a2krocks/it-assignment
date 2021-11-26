/* 

    Question : WAP to find maximum of three nos. using turnery operator.
    
    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/
#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter three numbers : \n");
    scanf("%d %d %d", &a, &b, &c);

    int max = b > a ? b : a; 
    max = c > max ? c : max;                         

    printf("%d is the largest. \n", max);

    return 0;
}