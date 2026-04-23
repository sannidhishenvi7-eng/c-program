#include <stdio.h>
#include <string.h>

int main() {
    char s[100], rev[100], sub[50];
    printf("Enter string: "); scanf("%s", s);
    int len = strlen(s);
    printf("Length: %d\n", len);
    for(int i=0;i<len;i++) rev[i]=s[len-1-i];
    rev[len]='\0';
    printf("Reversed: %s\n", rev);
    printf("Palindrome: %s\n", strcmp(s,rev)==0?"Yes":"No");
    printf("Enter substring to search: "); scanf("%s", sub);
    char *p = strstr(s, sub);
    if(p) printf("Found at index %d\n", (int)(p-s));
    else   printf("Not found\n");
    return 0;
}




