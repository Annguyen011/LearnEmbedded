#include<stdio.h>
#include<math.h>

#define MAX 1000000
int isPrime[MAX + 1];
void sieveOfEratosthenes(int l, int r) {
    for (int i = 0; i <= MAX; i++) {
        isPrime[i] = 1; // Assume all numbers are prime
    }
    isPrime[0] = isPrime[1] = 0; // 0 and 1 are not prime numbers

    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = 0; // Mark multiples of i as non-prime
            }
        }
    }

    // Print prime numbers in the range [l, r]
    for (int i = l; i <= r; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
}

int main() {
    int l, r;
    printf("Enter the range [l, r]: ");
    scanf("%d %d", &l, &r);
    sieveOfEratosthenes(l, r);
    return 0;
}