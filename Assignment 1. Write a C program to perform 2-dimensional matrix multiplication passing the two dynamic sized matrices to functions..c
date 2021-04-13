#include <stdio.h>
#include <stdlib.h>
void getMatrix(int *arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter value at[%d][%d]", i, j);
            scanf("%d", (arr + i * c + j));
        }
    }
}

void mMultiplication(int *arr1, int *arr2, int *result, int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            *(result + i * c2 + j) = 0;
            for (int c = 0; c < r2; c++)
            {
                *(result + i * c2 + j) += *(arr1 + i * r2 + c) * *(arr2 + c * c2 + j);
            }
        }
    }
}

void DisplayMatrix(int *arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", *(arr + i * c + j));
        }
        printf("\n");
    }
}
int main()
{

    int m, n, r, s;
    printf("enter no of rows for first array : m\n");
    scanf("%d", &m);
    printf("enter no of column for first array : n\n");
    scanf("%d", &n);
    printf("enter no of rows for second array : r\n");
    scanf("%d", &r);
    printf("enter no of column for second array : s\n");
    scanf("%d", &s);

    if (n == r)
    {

        int *arr1 = (int *)malloc(m * n * sizeof(int));
        int *arr2 = (int *)malloc(r * s * sizeof(int));
        int *result = (int *)malloc(m * s * sizeof(int));
        getMatrix(arr1, m, n);
        printf("Enter 2nd array");
        getMatrix(arr2, r, s);
        mMultiplication(arr1, arr2, result, m, n, r, s);
        DisplayMatrix(result, m, s);
    }
    else
    {
        printf("Please enter a valid matrix combination\n");
        printf("Column of matrix one Should match the Row of matrix two");
    }
}