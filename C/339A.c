#include <stdio.h>

int main(void)
{
    char input[101];
    scanf("%s", input);

    int one_count = 0;
    int two_count = 0;
    int three_count = 0;

    for( int i = 0; input[i]!='\0'; i++)
    {
        if(input[i] == '1')
        {
            one_count++;
        }
        if(input[i] == '2')
        {
            two_count++;
        }
        if( input[i] == '3')
        {
            three_count++;
        }
    }
    char output[101];
    int i = 0;
    for( i; i < 2*one_count; i+=2)
    {
        output[i] = '1';
        output[i+1] = '+';
    }
    for(i; i< 2*one_count + 2*two_count; i+=2)
    {
        output[i] = '2';
        output[i+1] = '+';
    }
    for(i; i < 2*one_count + 2*two_count + 2*three_count; i+=2)
    {
        output[i] = '3';
        if ( i != 2*one_count + 2*two_count + 2*three_count - 2)
            output[i+1] = '+';
    }
    output[2*one_count + 2*two_count + 2*three_count - 1] = '\0';
    for( int j = 0; output[j] != '\0'; j++)
    {
        printf("%c", output[j]);
    }
    printf("\n");
}
