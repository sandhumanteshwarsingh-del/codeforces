#include <stdio.h>

int main(void)
{
    char str[1001];
    int i = 0;
    do
    {
        scanf("%c", &str[i]);
        i++;
    }
    while(str[i-1] != '\n');
    str[i-1] = '\0';
    if (str[0] <= 'z' && str[0] >= 'a')
        str[0] = str[0] - 32;
    printf("%s\n", str);
}