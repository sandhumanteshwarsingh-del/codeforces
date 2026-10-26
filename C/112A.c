#include <stdio.h>

int main(void)
{
    char S1[101];
    char S2[101];
    scanf("%s", S1);
    scanf("\n");
    scanf("%s", S2);
    int i = 0;
    do
    {
        if( S1[i] / 97)
            S1[i] = S1[i] - 32;
        if( S2[i] / 97)
            S2[i] = S2[i] - 32;
        if ( S1[i] < S2[i] )
        {
            printf("-1\n");
            return 0;
        }
        else if ( S1[i] > S2[i] )
        {
            printf("1\n");
            return 0;
        }
        i++;
    } while (S1[i] != '\0');
    printf("0\n");
}