// Q92: Find the first repeating lowercase alphabet in a string.//
#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0}; 
    int i = 0, found = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
        }
        i++;
    }
    if (!found)
        printf("-1\n"); 
    return 0;
}
