#include <stdio.h>

int main(void) {
    FILE *fp_read,*fp_write;
    char input_filename[100],output_filename[100];
    printf("Input and output filename\n");
    scanf("%s %s", input_filename,output_filename);
    printf("%s %s\n",input_filename,output_filename);

    if ((fp_read = fopen(input_filename,"r")) == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    if ((fp_write = fopen(output_filename,"w")) == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    float total = 0;
    float number;
    while (!feof(fp_read)) {
        if (!feof(fp_read)) {

            fscanf(fp_read,"%f",&number);
            printf("%f\n",number);
        }
    }


    return 0;
}
