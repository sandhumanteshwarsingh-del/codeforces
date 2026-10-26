#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    while(getchar() != '\n');
    char statement[n][4];
    for ( int i = 0; i < n; i++)
    {
        int j = 0;
        char ch;
        do
        {
            ch = getchar();
            statement[i][j] = ch;
            j++;
        }
        while( ch != '\n');
        j-=1;
        statement[i][j] = '\0';
    }
    int x = 0;
    for ( int i = 0; i < n; i++)
    {
        for( int j = 0; j < 3; j++)
        {
            if(statement[i][j] == '+')
            {
                x++;
                break;
            }
            else if ( statement[i][j] == '-')
            {
                x--;
                break;
            }
        }
    }
    printf("%i\n", x);
}