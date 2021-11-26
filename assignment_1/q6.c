/* 

    Question : WAP to display all 2 digited no. which are divisible 3 but not divisible by 9.
    
    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/
#include<stdio.h>
int main() {

    int a, b; 
    printf("Enter the minimum and maxmium range : \n"); 

    // Let User Enter the range from 10 to 99. 
    scanf("%d", &a);  
    scanf("%d", &b);  

    printf("\n");

    for (int i = a; i <= b ; i++) {
        if ( i % 3 == 0 && i % 9 != 0) {
            printf("%d \n", i); 
        }
    }
    
    return 0; 
}