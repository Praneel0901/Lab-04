#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i,chars=0,words=0;
    printf("Enter a string:");
    scanf("%s",&str);
    for (i=0;i<strlen(str);i++) {
        if (str[i]!=' ')
            chars++;
        if (str[i]!=' ' && (i==0 || str[i-1] == ' '))
            words++;
    }
    printf("Total characters: %d\n", chars);
    printf("Total words: %d\n", words);
    return 0;
}