// write a c macro to get the maximum value between two values
#include <stdio.h>

#define max(a, b) ((a) > (b) ? (a) : (b))

void main(void) {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int maximum = max(num1, num2);

    printf("Maximum value = %d\n", maximum);


}
