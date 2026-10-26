#include <stdio.h>

int main(void)
{
    char name[101];
    int is_distinct[101];
    for ( int i = 0; i < 101; i++)
    {
        is_distinct[i] = 1;
    }
    scanf("%s", name);
    int i = 0;
    int j;
    int distincts = 0;
    do
    {
        j = i+1;
        do
        {
            if (name[j] == name[i])
            {
                is_distinct[i] = 0;
                j++;
                break;
            }
            j++;
        } while ( name[j] != '\0');
        if ( is_distinct[i] != 0 )
        {
            is_distinct[i] = 1;
            distincts++;
        }
        i++;
    } while (name[i] != '\0');
    if( distincts % 2 == 0 )
    {
        printf("CHAT WITH HER!\n");
    }   
    else 
    {
        printf("IGNORE HIM!\n");
    }
}