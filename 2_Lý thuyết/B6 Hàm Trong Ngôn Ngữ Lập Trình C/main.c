#include <stdio.h>
#include <math.h>

void printMessage() {
    printf("Hello from the function!\n");
}

int chinhPhuong(int  n)
{
    int can = sqrt(n);
    if(can * can == n)
        return 1; // n is a perfect square
    else
        return 0; // n is not a perfect square
}


int main() {
    printMessage();
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (chinhPhuong(number))
        printf("%d is a perfect square.\n", number);
    else
        printf("%d is not a perfect square.\n", number);
    return 0;
}
