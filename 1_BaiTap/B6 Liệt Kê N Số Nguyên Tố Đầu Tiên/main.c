#include<stdio.h>
#include<math.h>

#define MAX 1000000
int isPrime[MAX + 1];
void sieveOfEratosthenes() {
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
}
int main() {
    sieveOfEratosthenes();
    
    int n;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &n);

    for (int i = 0; i < MAX; ++i)
    {
        if (isPrime[i]) {
            printf("%d ", i);
            n--;
        }
        if (n == 0) {
            break; // Stop after printing n prime numbers
        }
    }
    
    
    return 0;
}