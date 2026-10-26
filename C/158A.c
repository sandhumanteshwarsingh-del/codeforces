#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[n];
    for( int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }
    int count_after = 0;
    for(int i = k; i < n; i++)
    {
        if( scores[i] == scores[k-1])
        {
            count_after++;
        }
    }
    int count_before = 0;
    for(int i = 0; i < k-1; i++)
    {
        if( scores[i] == scores[k-1])
        {
            count_before++;
        }
    }
    if ( scores[k - 1] <= 0)
    {
        printf("%d\n", k-1-count_before);
        return 0;
    }
    printf("%d\n", k + count_after);
}