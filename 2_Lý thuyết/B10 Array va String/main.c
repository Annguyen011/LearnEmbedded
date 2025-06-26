#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>

int	main(int argc, char **argv)
{
    // uint32_t arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%u", &arr[i]);
    // }

    // uint32_t max = arr[0];
    // for (int i = 1; i < 10; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    // }
    
    // printf("Max: %u\n", max);
    // printf("Array: ");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%u ", arr[i]);
    // }


    // system("pause");
    // return 0;

    string str;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    printf("You entered: %s\n", str);
    printf("Length of the string: %zu\n", strlen(str));
    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        putchar(str[i]);
    }
}
