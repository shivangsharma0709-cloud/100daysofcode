// Q97: Print the initials of a name.//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[100];
    int i;
    printf("Enter full name:\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    if (isalpha(name[0]))
        printf("%c.", toupper(name[0]));
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c.", toupper(name[i + 1]));
        }
    }
    printf("\n");
    return 0;
}