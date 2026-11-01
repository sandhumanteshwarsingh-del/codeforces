#include <stdio.h>

int main(void)
{
    long long n, k;
    scanf("%lld %lld", &n, &k);

    //if n is even
    //  hald odd half even
    //  if k is less than or equal to n/2 (ie lies in odd wale), then kth position is kth odd number 2k-1
    //  if k is more than n/2, it is the k - n/2th even nubmber, ie 2*(k-n/2)

    //if n is odd
    //n/2+1 odd numbers and n/2 even numbers
    //  if k is less than or equal to n/2+1, it is the kth odd number, ie 2k-1
    //  if k is more than n/2 + 1, it is the k - n/2 - 1th even number, ie 2*(k-n/2-1)

    //if n is even
    if (n%2 == 0)
    {
        if ( k <= n/2 )
        {
            printf("%lld\n", 2*k-1);
            return 0;
        }
        printf("%lld\n", 2*(k-n/2));
        return 0;
    }
    if ( k <= n/2+1 )
    {
        printf("%lld\n", 2*k-1);
        return 0;
    }
    printf("%lld\n", 2*(k-n/2-1));
}