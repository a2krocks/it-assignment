/* 

    Question : WAP to find the roots of any quadratic equation.
    
    Submited By : 
        Name : Apurv Ajay Kumar 
        Roll : 21-IT-122

*/

#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c, x1, x2;

    printf("ax^2 + bx + c = 0 \n");
    printf("Enter the values of a, b and c\n");

    printf("a : ");
    scanf("%f", &a);

    printf("b : ");
    scanf("%f", &b);

    printf("c : ");
    scanf("%f", &c);

    float d = pow(b, 2.0) - (4 * a * c);

    switch (d >= 0) // checks wether d > 0 or d = 0
    {
    case 0: // if false
        float img = sqrt(d * -1) / (2 * a);
        x1 = (-1 * b) / (2 * a);
        x2 = (-1 * b) / (2 * a);
        printf("Roots of the equation are :  %.2f - %.2fi and %.2f + %.2fi \n", x1, img, x2, img);
        break;
    case 1: // if true
        x1 = ((-1 * b) - sqrt(d)) / (2 * a);
        x2 = ((-1 * b) + sqrt(d)) / (2 * a);
        printf("Roots of the equation are :  %.2f and %.2f\n", x1, x2);
        break;
    default:
        printf("Something Went Wrong!");
        break;
    }
    return 0;
}