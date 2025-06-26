#include<stdio.h>
#include<math.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);
    
    if (a < 0 || b < 0) {
        printf("Nhap hai so nguyen duong.\n");
        return 1;
    }

    for (int i = a; i < b; ++i)
    {
        for (int j = i + 1; j <= b; ++j)
        {
            if(gcd(i, j) == 1) {
                printf("Cap so nguyen to cung nhau: (%d, %d)\n", i, j);
            }
            
        }
        
    }
    
    return 0;
}