#include <stdio.h>

int main()
{
    int input;
    if (scanf("%d", &input) == 1)
    {
        if (input == 2)
        {
            int *a;
            int *n = a;
            a = n;
            *n = 5;
        }
        else
        {
            printf("OK\n");
        }
    }
    return 0;
}