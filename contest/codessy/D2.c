#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for(int r = 0; r < t; r++)
    {
        long long n;
        scanf("%lld", &n);
        //get the sum of first n natural numbers using n(n+1)/2 then subtract the sum of powers of 2 upto that point using gp sum
        long long raw_sum = n*(n+1)/2;
        int mult = 1;
        while(1)
        {
            if ( mult > n )
            {
                break;
            }
            else
            {
                mult*=2;
            }
        }
        //calculate what to subtract using gp sum formula
        long long subtract = mult - 1;
        long long output = raw_sum - 2*subtract;
        printf("%lld\n", output);
    }
}