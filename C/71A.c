#include <stdio.h>


int main(void)
{
    //get the strings
    int n;
    scanf("%d", &n);
    while(getchar()!='\n');
    char C[n][101];
    int length[n];
    int i = 0;
    for (i; i < n; i++)
    {
        char ch;
        int j = 0;
        do
        {
            ch = getchar();
            C[i][j] = ch;
            j++;
        }
        while( ch != '\n');
        j-=1;
        C[i][j] = '\0';
        length[i] = j;
    }

    //logically output the strings
    for ( int i = 0; i < n; i++)
    {
        if ( length[i] > 10)
            printf("%c%d%c\n", C[i][0], length[i] - 2, C[i][length[i] - 1]);
        else
            printf("%s\n", C[i]);
    }

}