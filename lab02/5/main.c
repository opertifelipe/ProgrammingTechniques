#include <ctype.h>
#include <stdio.h>

int encoding(FILE *fin, FILE *fout);
int decoding(FILE *fin, FILE *fout);

int main(void) {
    FILE *fp_read,*fp_write;
    char choice;
    if ((fp_read = fopen("../Input.txt","r")) == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    if ((fp_write = fopen("../Output.txt","w")) == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    printf("Please write (E) for enconding or (D) for decoding\n");
    choice = getchar();
    switch (choice) {
        case 'E':
            encoding(fp_read,fp_write);
            break;
        case 'D':
            decoding(fp_read,fp_write);
            break;

        default:
            printf("Wrong choice\n");
            return 2;
    }
    return 0;
}

int encoding(FILE *fin, FILE *fout) {
    char input_char;
    int counter = 0;
    int number;
    while (!feof(fin)) {
        if (!feof(fin)) {
            input_char = fgetc(fin);
            if isdigit(input_char) {
                number = (int)(input_char - '0') + counter;
                printf("Before %i %c %i\n", counter, input_char, number);
                counter++;
                while (number>9) {
                    number = number - 10;
                }
                printf("After %i %c %i\n", counter-1, input_char, number);
                fprintf(fout,"%i",number);
            }
            else {
                char letter;
                if (islower(input_char)) {
                    letter = toupper(input_char);
                    fprintf(fout,"%c",letter);
                } else if (isupper(input_char)){
                    letter = tolower(input_char);
                    fprintf(fout,"%c",letter);
                } else {
                    fprintf(fout,"%c",input_char);
                }
            }


        }
    }
    return 0;
}

int decoding(FILE *fin, FILE *fout) {
    char input_char;
    int counter = 0;
    while (!feof(fin)) {
        if (!feof(fin)) {
            input_char = fgetc(fin);
            if isdigit(input_char) {
                int number = (int)(input_char - '0') - counter;
                counter++;
                while (number<0) {
                    number = number + 10;
                }
                fprintf(fout,"%i",number);
            }
            else {
                char letter;
                if (islower(input_char)) {
                    letter = toupper(input_char);
                    fprintf(fout,"%c",letter);
                } else if (isupper(input_char)){
                    letter = tolower(input_char);
                    fprintf(fout,"%c",letter);
                } else {
                    fprintf(fout,"%c",input_char);
                }
            }


        }
    }
    return 0;
}