#include <stdio.h>

int main(void)
{
    long a, b;
    scanf("%ld %ld", &a, &b);

    long output = 0;
    while(a != b)
    {
        //ensure that a is always > b (since exits if a == b)
        if ( a < b )
        {
            long tmp = b;
            b = a;
            a = tmp;
        }
        //if a is equal to b, add 1 and exit
        if ( a == b )
        {
            output+=1;
            break;
        }
        //if at any stage, a%b is 0, then make a/b squares and exit
        if ( a%b == 0 )
        {
            output+=a/b;
            break;
        }
        long factor = a/b;
        output+=factor;
        a = a - factor*b;
    }
    printf("%ld\n", output);
}