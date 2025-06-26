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
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n < 0 || n > MAX) {
        printf("Nhap n trong khoang tu 0 den %d\n", MAX);
        return 1;
    }
    if (isPrime[n] && csnt(n) && tongNguyenTo(n)) {
        printf("%d la so nguyen to thuan nguyen to\n", n);
    } else {
        printf("%d khong phai la so nguyen to thuan nguyen to\n", n);
    }
    printf("Tong cac chu so cua %d la: ", n);
    int sum = 0, temp = n;
    while (temp) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("%d\n", sum);
    return 0;
}