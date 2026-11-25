#include <stdio.h>
#include <string.h>
int main() {
    char name[50];
    int i;
    printf("Enter your name: ");
    scanf("%s",name);
    for (i=0;i<strlen(name);i++)
        printf("%c = %d\n",name[i],name[i]);
    return 0;
}