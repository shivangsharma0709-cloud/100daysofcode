//Q98: Print initials of a name with the surname displayed in full//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[100];
    char words[10][20];
    int i, j = 0, k = 0, count = 0;
    printf("Enter full name:\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ') {
            words[j][k++] = name[i];
        } else {
            words[j][k] = '\0';
            j++;
            k = 0;
        }
    }
    words[j][k] = '\0';
    count = j + 1;
    for (i = 0; i < count - 1; i++) {
        if (isalpha(words[i][0]))
            printf("%c.", toupper(words[i][0]));
    }
    printf("%s\n", words[count - 1]);

    return 0;
}