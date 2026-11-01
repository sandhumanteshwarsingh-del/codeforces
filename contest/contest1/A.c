#include <stdio.h>

int main(void)
{
    //assessing the number of test casses
    int t;
    scanf("%d", &t);

    //loop through all the test casses
    for(int r = 0; r < t; r++)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        char p[n+1];
        int p_flag[n];
        char q[m+1];
        int q_flag[m];

        //initializing the flag array to 1 (ie all active)
        for( int i = 0; i < n; i++)
        {
            p_flag[i] = 1;
        }
        for( int i = 0; i < m; i++)
        {
            q_flag[i] = 1;
        }

        scanf("%s", p);
        scanf("%s", q);

        char resultant[101];
        int index = 0;

        //traversing over elements of p
        for( int i = 0; i < n; i++)
        {
            if ( p_flag[i] == 0)
            {
                continue;
            }
            //traversing over elements of q
            for(int j = 0; j < m; j++)
            {
                if ( p[i] == q[j] && q_flag[j] == 1)
                {
                    p_flag[i] = 0;
                    q_flag[j] = 0;
                    break;
                }
            }
            continue;
        }

        //build the resultant string
        for( int i = 0; i < n; i++ )
        {
            if( p_flag[i] == 1)
            {
                resultant[index] = p[i];
                index++;
            }
        }

        //null terminate the resultant
        resultant[index] = '\0';

        printf("%s\n", resultant);

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