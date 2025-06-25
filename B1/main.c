#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("This is a simple C program.\n");
    printf("It prints messages to the console.\n");
    int a = 100;
    long long dienTick = 1000000000;
    double pi = 3.14159265358979323846;
    printf("The value of pi is approximately: %.15lf\n", pi);
    printf("%lld", dienTick);
    printf("\n");
    printf("%d",a);

    int b;
    scanf("%d", &b);
    printf("You entered: %d\n", b);

    return 0;
}