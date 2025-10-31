#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float multi(float a, float b) {
    return a*b;
}

float div(float a, float b) {
    return a/b;
}


int main(void) {
    char operator;
    float a,b;
    printf("Enter the operator (+, -, *, /)\n");
    operator = getchar();
    printf("Enter two numbers\n");
    scanf("%f %f",&a, &b);
    float result;
    switch (operator) {
        case '+':
            result = add(a,b);
            break;
        case '-':
            result = div(a,b);
            break;
        case '*':
            result = multi(a,b);
            break;
        case '/':
            if (b !=0) {
                result = div(a,b);
            }
            else {
                return 1;
            }
            break;
        default:
            return 1;
    }
    printf("%c %f",operator,result);


    return 0;
}