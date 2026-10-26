#include <stdio.h>

int main(void)
{
    int n;
    int write = 0;
    scanf("%d", &n);
    int decision[n][3];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &decision[i][0], &decision[i][1], &decision[i][2]);
    }
    for( int i = 0; i < n; i++)
    {
        if (decision[i][0] + decision[i][1] + decision[i][2] >=2)
            write+=1;
    }
    printf("%d\n", write);
}