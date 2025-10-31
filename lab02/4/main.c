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

float calculate(char operator, float a, float b) {
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
                return 2;
            }
            break;
        default:
            return 3;
    }
    return result;
}

int main(void) {
    char operator;
    float a,b;
    FILE *fp_read, *fp_write;
    if ((fp_read = fopen("../Operations.txt", "r")) == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    if ((fp_write = fopen("../Output.txt", "w")) == NULL) {
        printf("Error opening file\n");
        return 2;
    }
    float result;
    while (!feof(fp_read)) {
        if (!feof(fp_read)) {
            fscanf(fp_read, "%c %f %f\n", &operator,&a, &b);
            result = calculate(operator, a,b);
            printf("%c %.2f\n",operator,result);
            fprintf(fp_write, "%c %.2f\n", operator,result);
        }
        }
    return 0;
}