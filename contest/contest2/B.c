#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for ( int r = 0; r < t; r++)
    {
        int n;
        scanf("%d", &n);
        char string[n+1];
        scanf("\n");
        scanf("%s", string);
        int counter = 0;
        if (string[0] == 'B')
        {
            counter++;
        }
        for(int i = 0; i < n-1; i++)
        {
            if ( string[i+1] == string[i] )
            {
                counter++;
            }
        }
        printf("%d\n", counter);
    }
}