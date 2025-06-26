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

int csnt(int n)
{
    while (n)
    {
        int r = n%10;
        if (r != 2 && r != 3 && r != 5 && r != 7)
            return 0; // Not a prime digit
        n /= 10;
    }
    return 1; // All digits are prime
}

int tongNguyenTo(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    
    return isPrime[sum];
}

int main() {
    sieveOfEratosthenes();
    
    int n;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &n);
    
    if (n < 0 || n > MAX) {
        printf("Number out of range. Please enter a number between 0 and %d.\n", MAX);
        return 1;
    }
    
    if (isPrime[n]) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    
    return 0;
}