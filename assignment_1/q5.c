/* 

    Question : WAP to find the largest and smallest number among three numbers.
    
    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/
#include<stdio.h>
int main() {

    int a,b,c;
    printf("Enter three numbers : \n"); 
    scanf("%d %d %d", &a, &b , &c); 

    int max; 
    if ( b > a) {
        max = b; 
    } else {
        max = a; 
    }
    
    if ( c > max) {
        max = c; 
    }

    int min; 
    if (b < a ) {
        min = b; 
    } else {
        min = a; 
    }

    if ( c < min) {
        min = c;
    }

    printf("%d is the largest. \n", max); 
    printf("%d is the smallest.\n", min); 

    return 0; 
}