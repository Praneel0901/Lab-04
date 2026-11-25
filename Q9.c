#include <stdio.h>
#include <string.h>
int main() {
    char str[100],oldch,newch;
    int i,count=0;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("Enter the character to replace: ");
    scanf(" %c",&oldch);
    printf("Enter the new character: ");
    scanf(" %c",&newch);
    for (i=0;i<strlen(str);i++) {
        if (str[i]==oldch) {
            str[i]=newch;
            count++;
        }
    }
    printf("Modified string: %s\n",str);
    printf("Replacements made: %d\n",count);
    return 0;
}