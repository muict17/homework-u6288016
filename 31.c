#include<stdio.h>

int main()
{
    int n, m, i, j;
    int identity=0;
    printf("Input number of Rows for the matrix :");
    scanf("%d",&n);
    printf("Input number of Columns for the matrix :");
    scanf("%d",&m);
    int matrix[n][m];
    printf("Input elements in the first matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("element - [%d],[%d] : ",i ,j);
            scanf("%d",&matrix[i][j]);
            if(i==j)
            {
                if(matrix[i][j]==1)
                {
                    identity++;
                }
            }
            else
            {
                if(matrix[i][j]!=0)
                {
                    identity--;
                }
            }
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    if(identity==n)
    {
        printf("The matrix is an identity matrix.");
    }
    else
    {
        printf("The matrix is not an identity matrix.");
    }
    printf("\n");
    return 0;
}