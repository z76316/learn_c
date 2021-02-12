#include <stdio.h>
int sum(int n);

int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Sum = %d\n", sum(number));
    
    return 0;
}

int sum(int n) {
    if (n != 0) {
        return n + sum(n-1);
    }
    else {
        return n;
    }
}
