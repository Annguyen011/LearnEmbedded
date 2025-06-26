#include<stdio.h>

int main() {
    int a[100][100];
    int i, j;
    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            a[i][j] = i + j;
        }
    }

    printf("The 2D array is:\n");
    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}