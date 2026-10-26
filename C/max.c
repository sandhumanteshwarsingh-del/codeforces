#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int coins[n];
    int sum_others = 0;
    int sum_maxes;
    int prev_max = __INT_MAX__;
    int count = 0;
    for(int i = 0; i< n; i++)
    {
        scanf("%d", &coins[i]);
        sum_others+=coins[i];
    }
    while(true)
    {
        int temporary_max = coins[0];
        for(int i = 1; i < n; i++)
        {
            if ( coins[i] > temporary_max && coins[i] < prev_max )
            {
                temporary_max = coins[i];
            }
        }
        int max = temporary_max;
        sum_others-=max;
        sum_maxes+=max;
        count++;
        if ( sum_maxes > sum_others)
        {
            break;
        }
        else
        {
            prev_max = max;
        }
    }
    printf("%d\n", count);
}