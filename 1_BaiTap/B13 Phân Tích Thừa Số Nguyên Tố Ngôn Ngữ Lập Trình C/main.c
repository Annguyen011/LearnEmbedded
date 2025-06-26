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

int countDivisors(int n) {
    int i = 2;
    while (n > 1)
    {
        if(isPrime[i] && n % i == 0) 
        {
            printf("i = %d\n", i);
            n /= i;
        }
        else if (i >= 1000)
        {
            return n; // Stop if i exceeds 1000
        }
        else
        {
            i++;
        }
        
    }
    return 1; // Return 1 if n is reduced to 1
}

int main()
{
    sieveOfEratosthenes();
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    

    return 0;
}