#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("Negative number\n");
    } else if (n == 0) {
        printf("Zero\n");
    } else {
        printf("Positive number\n");
    }

    if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    char c;
    scanf(" %c", &c);
    if(c >= 'A' && c <= 'Z') {
        printf("Uppercase letter\n");
    } else if(c >= 'a' && c <= 'z') {
        printf("Lowercase letter\n");
    } else if(c >= '0' && c <= '9') {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }
}