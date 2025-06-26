#include<stdio.h>
#include<math.h>

// Số có ba ước số là bình phương của một số nguyên tố
# define MAX 1000000
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
    cnt = 0;
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n < 0 || n > MAX) {
        printf("Nhap n trong khoang tu 0 den %d\n", MAX);
        return 1;
    }
    for (int i = 0; i <= sqrt(n); ++i)
    {
        if(isPrime[i] && i * i <= n) {
            int square = i * i;
            if (square <= n) {
                cnt++;
            }
        }
    }
    printf("So luong so co 3 uoc so nho hon %d la: %d\n", n, cnt);

    return 0;
}