#include <stdio.h>

int main(void)
{
    //assessing the number of test casses
    int t;
    scanf("%d", &t);

    int n[t];
    int m[t];
    char p[t][101];
    char q[t][101];

    for( int r = 0; r < t; r++)
    {
        scanf("%d %d", &n[r], &m[r]);
        scanf("%s", p[r]);
        scanf("%s", q[r]);
    }

    //loop through all the test casses
    for(int r = 0; r < t; r++)
    {
        int p_flag[n[r]];
        int q_flag[m[r]];
        //initializing the flag array to 1 (ie all active)
        for( int i = 0; i < n[r]; i++)
        {
            p_flag[i] = 1;
        }
        for( int i = 0; i < m[r]; i++)
        {
            q_flag[i] = 1;
        }

        char resultant[101];
        int index = 0;

        //traversing over elements of p
        for( int i = 0; i < n[r]; i++)
        {
            if ( p_flag[i] == 0)
            {
                continue;
            }
            //traversing over elements of q
            for(int j = 0; j < m[r]; j++)
            {
                if ( p[r][i] == q[r][j] && q_flag[j] == 1)
                {
                    p_flag[i] = 0;
                    q_flag[j] = 0;
                    break;
                }
            }
            continue;
        }

        //build the resultant string
        for( int i = 0; i < n[r]; i++ )
        {
            if( p_flag[i] == 1)
            {
                resultant[index] = p[r][i];
                index++;
            }
        }

        //check if the denominator has anything remaining
        int denom_check = 0;
        for(int i = 0; i < m[r]; i++)
        {
            if (q_flag[i] == 1)
            {
                denom_check = 1;
            }
        }
        if ( denom_check == 1 )
        {
            printf("NO\n");
            continue;
        }

        //null terminate the resultant
        resultant[index] = '\0';

        //compare if the resultant string is equal to "six" in any order
        
        char six[4] = "six";
        int flag[3] = {0};
        if ( index != 3 )
        {
            printf("NO\n");
            continue;
        }
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if( six[i] == resultant[j] )
                {
                    flag[i] = 1;
                    break;
                }
            }
        }
        if ( flag[0] == 1 && flag[1] == 1 && flag[2] == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        continue;
    }
}