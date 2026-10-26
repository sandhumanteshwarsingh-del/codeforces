#include <stdio.h>

int main(void)
{
    char input[101];
    scanf("%s", input);
    char current = input[0];
    int members = 1;
    for( int i = 1; input[i] != '\0'; i++)
    {
        if (input[i] == current)
        {
            members++;
        }
        else if ( members < 7 )
        {
            members = 1;
            current = input[i];
        }
        else
        {
            printf("YES\n");
            return 0;
        }
    }
    if ( members >= 7 )
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
}