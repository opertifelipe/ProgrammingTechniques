#include <stdio.h>
int main()
{
    char letter, string[100 + 1];
    printf("Enter a character:");
    // fflush(stdout);
    scanf(" %c", &letter);
    getchar();
    printf("The character is: %c\n", letter);
    // fflush(stdout);
    printf("Enter character two:");
    // fflush(stdout);
    letter = getchar();
    getchar();
    printf("The character is: ");
    // fflush(stdout);
    putchar(letter);
    putchar('\n');
    printf("Enter a string:");
    // fflush(stdout);
    fgets(string, 20, stdin);
    printf("The string is: ");
    // fflush(stdout);
    fputs(string, stdout);
    return 0;
}
