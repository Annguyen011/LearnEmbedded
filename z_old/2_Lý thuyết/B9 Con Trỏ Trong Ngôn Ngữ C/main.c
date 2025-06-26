#include<stdio.h>

int main() {
    int a = 5;
    int *p = &a;
    printf("Value of a: %d\n", a);
    printf("Value of a using pointer: %d\n", *p);
    return 0;

    int b[5] = {1, 2, 3, 4, 5};
    int *q = b;
    printf("Array elements using pointer:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(q + i));
    }

    // cap phat dong
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int *dynamicArray = (int *)malloc(n * sizeof(int));
    if(dynamicArray == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &dynamicArray[i]);
    }
    printf("You entered:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", dynamicArray[i]);
    }
    free(dynamicArray);
    return 0;
}