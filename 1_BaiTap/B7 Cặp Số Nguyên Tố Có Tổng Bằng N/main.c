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
int main()
{
    int n;
    scanf("%d", &n);
    sieveOfEratosthenes();
    for (int i = 2; i <= n / 2; ++i)
    {
        printf("%d %d\n", i, n - i);
        printf("\n");
        if(isPrime[i] && isPrime[n - i]) {
            printf("%d %d\n", i, n - i);
            return 0; // Found a pair, exit the program
        }
    }
    
}