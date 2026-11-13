#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for(int r = 0; r < t; r++)
    {
        int a, b, c;
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        if ( c - b == 1 && b - a == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}