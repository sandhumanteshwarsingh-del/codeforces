#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int coins[n];
    int sum_others = 0;
    for(int i = 0; i< n; i++)
    {
        scanf("%d", &coins[i]);
        sum_others+=coins[i];
    }
    int coin_number = 1;
    int current_max = coins[0];
    int prev_max = __INT_MAX__;
    int sum_max = 0;
    int i = 1;

    while(sum_max <= sum_others && i < n)
    {
        if ( coins[i] > current)
        {
            current = coins[i];
        }
        if(coins[i] > current_max && coins[i] < prev_max)
        {
            prev_max = current_max;
            current_max = coins[i];
            sum_others-=current_max;
            sum_max+=current_max;
            coin_number++;
        }
        i++;
    }
    printf("%d\n", coin_number);
}