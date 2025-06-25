#include <stdio.h>

int main()
{
    while (1)  // Infinite loop
    {
        printf("This is an infinite loop.\n");
        break;  // Remove this line to keep the loop running indefinitely
    }
    {
        printf("This is a separate block.\n");
    }

    int i = 0;
    do {
        printf("This is a do-while loop iteration %d.\n", i);
        i++;
    } while (i < 5);  // Loop will run 5 times
    
    return 0;
}