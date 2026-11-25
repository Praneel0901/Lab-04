#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100],str3[100];
    int len,result;
    printf("enter first string: ");
    scanf("%s",&str1);
    printf("Enter second string: ");
    scanf("%s",&str2);
    len=strlen(str1);
    printf("Length=%d\n",len);
    strcpy(str3,str1);
    printf("Copied string is %s\n",str3);
    strcat(str1,str2);
    printf("Concatenated string is %s\n",str1);
    result=strcmp(str3,str2);
    if(result==0){
        printf("Strings are equal\n");

    }else{
        printf("Strings are not equal\n");

    }
    printf("Reverse=\n ");
    for(int i=len-1;i>=0;i--){
        printf("%c",str3[i]);
    }
    return 0;

}