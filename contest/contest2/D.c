#include <stdio.h>

char find_largest(char *s, int n);
int is_palindrome(char *s, int n);
int swap(char *s, int n, char c);

/*Could not be solved during contest*/

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int r = 0; r < t; r++)
    {
        int n;
        int steps = 0;
        scanf("%d", &n);
        scanf("\n");
        char string[n+1];
        scanf("%s", string);
        while(!is_palindrome(string, n))
        {
            char largest = find_largest(string, n);
            steps+= swap(string, n, largest);
        }
        printf("%d\n", steps);
    }
}

char find_largest(char *s, int n)
{
    char largest = s[0];
    for(int i = 1; i < n; i++)
    {
        if ( s[i] > largest )
        {
            largest = s[i];
        }
    }
    int symmetric = 1;
    for(int i = 0; i < n; i++)
    {
        if (s[i] == largest)
        {
            if ( s[n - i - 1] != largest)
            {
                return largest;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        s[i]
    }
    return find_largest()


    //if largest is in a symmetric position, leave it.
}

int is_palindrome(char *s, int n)
{
    for(int i = 0; i < n/2; i++)
    {
        if ( s[i] != s[n-i-1])
        {
            return 0;
        }
    }
    return 1;
}

int swap(char *s, int n, char c)
{
    for(int i = 0; i < n; i++)
    {
        if ( s[i] == c )
        {
            s[i]--;
        }
    }
    return 1;
}