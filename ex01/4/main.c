#include <stdio.h>
int main()
{
    FILE *fp_read, *fp_write;
    char string[100];
    fp_read = fopen("../Input.txt", "r");
    if (fp_read == NULL)
    {
        printf("Error opening input file\n");
        return 1;
    }
    fp_write = fopen("../Output.txt", "w");
    if (fp_write == NULL)
    {
        printf("Error opening output file\n");
        return 2;
    }
    while (!feof(fp_read))
    {
        fgets(string, 20, fp_read);
        fputs("\n", fp_write);
        fputs(string, fp_write);
    }
    rewind(fp_read);
    while (!feof(fp_read))
    {
        fscanf(fp_read, "%s", string);
        if (!feof(fp_read))
        {
            fprintf(fp_write, "%s", string);
            fprintf(fp_write, "\n");
        }
    }
    fclose(fp_read);
    fclose(fp_write);
    return 0;
}