#include <stdio.h>
#define PINUMBER 3.14159
int main()
{
    int a_int, b_int, res_int_float, res_int_int;
    float res_float_float, res_float_int;
    a_int = 7;
    b_int = 2;
    // casting
    res_float_float = (float)(a_int) / b_int * PINUMBER;
    res_int_float = (float)(a_int) / b_int * PINUMBER;
    res_int_int = (a_int) / b_int * PINUMBER;
    res_float_int = (a_int) / b_int * PINUMBER;

    printf("The integer result with integer inputs is: %f\n", res_int_int);
    printf("The integer result with float inputs is: %f\n", res_int_float);
        printf("The float result with integer inputs is: %f\n", res_float_int);
    printf("The float result with float inputs is: %f\n", res_float_float);
    return 0;
}