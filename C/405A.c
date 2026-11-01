#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int matrix[n][100];

    //initialize the array to zeros
    for(int column = 0; column < n; column++)
    {
        for(int row = 99; row >= 0; row--)
        {
            matrix[column][row] = 0;
        }
    }

    //setting the matrix
    //  input
    int matrix_info[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &matrix_info[i]);
    }
    //  setting values in the matrix
    for(int column = 0; column < n; column++)
    {
        for(int row = 99; row >= 100-matrix_info[column]; row--)
        {
            matrix[column][row] = 1;
        }
    }

    //Flipping the gravity to right hand side
    //starting from the top row of the matrix
    for( int row = 0; row < 100; row++)
    {
        //Starting from the rightmost column of the matrix
        for(int column = n-1; column >= 0; column--)
        {
            //sliding code for each block element
            while(1)
            {
                //exit if edge or right side blocked
                if((column == n-1)||(matrix[column+1][row] == 1))
                {
                    break;
                }
                else if ( matrix[column][row] == 0 ) //exit if no block
                {
                    break;
                }
                else //slide right by one position
                {
                    matrix[column][row] = 0;
                    matrix[column+1][row] = 1;
                }
            }
        }
    }

    //reading the matrix and storing the values in an array
    int matrix_info_new[n];
    for(int i = 0; i < n; i++)
    {
        matrix_info_new[i] = 0;
    }
    for(int column = 0; column < n; column++)
    {
        for(int row = 0; row < 100; row++)
        {
            if( matrix[column][row] == 1 )
            {
                matrix_info_new[column]++;
            }
        }
    }

    //printing the array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", matrix_info_new[i]);
    }
    printf("\n");

}