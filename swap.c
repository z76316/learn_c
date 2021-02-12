#include <stdio.h>

int main() {
    double a, b, tmp;

    printf("Input the number a: ");
    scanf("%lf", &a);
    printf("Input the number b: ");
    scanf("%lf", &b);
    
//    tmp = a;
//    a = b;
//    b = tmp;

    a = a - b;
    b = a + b;
    a = b - a;

    printf("After swapped, a = %.2lf, b = %.2lf\n", a, b);

    return 0;
}

