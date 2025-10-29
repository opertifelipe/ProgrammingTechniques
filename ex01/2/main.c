#include <stdio.h>
#define PINUMBER 3.14159
int main()
{
    int num1, num2;
    num1 = 12;
    num2 = 46;
    if (num1 > num2)
    {
        printf("Num1 is bigger than Num2\n");
    }
    else
    {
        printf("Num2 is bigger than Num1\n");
    }
    num1 = 1;
    switch (num1) {
        case 1:
            printf("Num1 is 1.");
            break;
        case 2:
            printf("Num1 is 2.");
            break;
        default:
            printf("Num1 is neither 1 nor 2.");
            break;
    }
    return 0;
}