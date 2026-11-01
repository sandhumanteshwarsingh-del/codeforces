#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for(int r = 0; r < t; r++)
    {
        int output = 0;
        int n;
        scanf("%d", &n);
        //get all the single digit numbers
        if ( n < 10 )
        {
            output = n;
        }
        else if ( n >=10 && n < 100 )
        {
            output = 9 + n/10;
        }
        else if ( n >=100 && n < 1000)
        {
            output = 18 + n/100;
        }
        else if ( n >= 1000 && n < 10000)
        {
            output = 27 + n/1000;
        }
        else if ( n >= 10000 && n < 100000)
        {
            output = 36 + n/10000;
        }
        else if ( n >= 100000 && n < 1000000 )
        {
            output = 45 + n/100000;
        }
        else if ( n >= 1000000 && n < 10000000)
        {
            output = 54 + n/1000000;
        }
        printf("%d\n", output);
    }
}