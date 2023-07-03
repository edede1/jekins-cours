#include <stdio.h>
#include "../operation.h/operation.h"

int main() {
    int a = 10, b = 5;
    
    int sum = addition(a, b);
    int difference = soustraction(a, b);
    int product = multiplication(a, b);
    float quotient = division(a, b);
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    
    return 0;
}
