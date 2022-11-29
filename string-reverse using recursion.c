#include <stdio.h>
#include <string.h>
void reverse(char str1[], int index, int size)
{
    char temp;
    temp = str1[index];
    str1[index] = str1[size - index];
    str1[size - index] = temp;//s=t
    if (index == size / 2);
    {
        return;
    }
    reverse(str1, index + 1, size);
}
int main()
{
    char str1[20];
    int size;
    printf("Enter String : ");
    scanf("%s", str1);
    size = strlen(str1);
    reverse(str1, 0, size - 1);
    printf("\nReverse String :  %s\n", str1);
    return 0;
}
