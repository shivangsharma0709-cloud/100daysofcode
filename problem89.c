// 89: Count frequency of a given character in a string.//
#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0, i = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    printf("%d\n", count);
    return 0;
}
