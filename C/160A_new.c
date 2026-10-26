#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int coins[n];
    int sum_total = 0;
    int sum_maxes = 0;
    int coin_count = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &coins[i]);
        sum_total+=coins[i];
    }

    do
    {
        //choose a new max
        int max = coins[0];
        int max_count = 0;
        for(int i = 0; i < n; i++)
        {
            if( coins[i] >= max )
            {
                max = coins[i];
            }
        }

        //count the number of coins that are equal to max value and zero them out
        for(int i = 0; i < n; i++)
        {
            if( coins[i] == max)
            {
                coins[i] = 0;
                max_count++;
            }
        }

        //consider how many max denomination counts you need to to exceed the half point
        for(int i = 1; i <= max_count; i++)
        {
            if(sum_maxes + i*max > sum_total/2.0)
            {
                printf("%d\n", coin_count + i);
                return 0;
            }
        }
        coin_count+= max_count;
        sum_maxes+= max*max_count;
    }
    while( sum_maxes <= sum_total/2.0 );
    printf("%d\n", coin_count);
}