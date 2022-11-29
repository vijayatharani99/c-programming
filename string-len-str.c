#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i=0;
    printf("Enter String: ");
    gets(s);
    i=strlen(s);
    printf("\nLength of String: %d", i);
    return 0;
}
