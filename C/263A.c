#include <stdio.h>

int main(void)
{
    int r, c;
    int matrix[5][5];
    for( int i = 0; i < 5; i++)
    {
        for( int j = 0; j < 5; j++)
        {
            scanf("%d ", &matrix[i][j]);
            if( matrix[i][j] == 1 )
            {
                r = i;
                c = j;
            }
        }
        scanf("\n");
    }
    if (r/2)
        r = 4-r;
    if (c/2)
        c = 4-c;
    printf("%d\n", 4 - r - c);
}