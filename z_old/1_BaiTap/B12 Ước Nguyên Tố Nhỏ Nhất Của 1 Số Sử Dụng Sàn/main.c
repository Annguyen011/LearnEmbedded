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
    sieveOfEratosthenes();
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n < 0 || n > MAX) {
        printf("Nhap n trong khoang tu 0 den %d\n", MAX);
        return 1;
    }

    if(n == 2) {
        printf("So luong so co 3 uoc so nho hon %d la: 0\n", n);
        return 0;
    }


    for (int i =3; i <= n; i+=2)
    {
        if(n % i == 0 && isPrime[i]) {
            int square = i * i;
            if (square <= n) {
                printf("So %d la so co 3 uoc so nho hon %d\n", square, n);
            }
        }
    }
    

    return 0;
}