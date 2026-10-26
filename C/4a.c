#include <stdio.h>

int main(void)
{
    int w;
    scanf("%d", &w);

    if( (w%2) != 0 )
    {
        printf("NO\n");
        return 0;
    }
    int i = 2;
    for(i; i <= w/2; i+=2)
    {
        if( (w - i )% 2 == 0)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
    
}