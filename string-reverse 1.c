include<stdio.h>
#include<string.h>
int main()
{
    char s[120], t;
    int i=0, j = 0;
    printf("Enter String : ");
    gets(s);
    j = strlen(s) - 1;
    while (i < j)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
    printf("\nReverse String = %s", s);
    return (0);
}
