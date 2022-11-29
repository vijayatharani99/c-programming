#include <stdio.h>
int main()
{
    char s[1000];
    int i=0;
    printf("Enter String: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++);
    printf("\nLength of String: %d", i);
    return 0;
}
