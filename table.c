// create a table

#include <stdio.h>

int main()
{
    int input, i = 1;

    // Take input from user

    printf("Enter the number whose table you know:\n");
    scanf("%d", &input);

    // output

    while (i <= 10)
    {
        printf("\n%d * %d = %d", input, i, input * i);
        i++;
    }
    return 0;
}
