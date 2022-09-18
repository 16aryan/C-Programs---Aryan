//
//  main.c
//  Multiply two matrices
//
//  Created by Aryan on 6/10/21.
//

#include<stdio.h> 
#define ROW1 2
#define COL1 2
#define ROW2 COL1
#define COL2 3

int main()
{
    int i, j, arr1[ROW1][COL1],
              arr2[ROW2][COL2],
              arr3[ROW1][COL2];

    printf("Enter first matrix (%d x %d): \n", ROW1, COL1);

    // input first matrix
    for(i = 0; i < ROW1; i++)
    {
        for(j = 0; j < COL1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nEnter second matrix (%d x %d): \n", ROW2, COL2);

    // input second matrix
    for(i = 0; i < ROW2; i++)
    {
        for(j = 0; j < COL2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\narr1 * arr2 = ");

    // multiply two matrices
    for(i = 0; i < ROW1; i++)
    {
        for(j = 0; j < COL2; j++)
        {
            arr3[i][j] = 0;

            for(int k = 0; k < COL1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }

        printf("\n");
    }

    // print the result
    for(i = 0; i < ROW2; i++)
    {
        for(j = 0; j < COL2; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    // signal to operating system everything works fine
    return 0;
}
