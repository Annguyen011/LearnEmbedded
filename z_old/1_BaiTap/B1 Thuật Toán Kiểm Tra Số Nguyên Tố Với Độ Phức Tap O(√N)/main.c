#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int nt[1000][1000];
void init() {
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            nt[i][j] = 0;
        }
    }
}
void fillPrimes() {
    int count = 0;
    for (int i = 2; count < 1000; i++) {
        if (isPrime(i)) {
            nt[count / 100][count % 100] = i;
            count++;
        }
    }
}

int main() {
    init();
    fillPrimes();
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}