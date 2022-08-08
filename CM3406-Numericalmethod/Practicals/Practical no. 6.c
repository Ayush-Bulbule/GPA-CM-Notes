//Write C program to find solution of given Simultaneous Equations using Gauss Elimination method.
/*
    1) Augmented Matrix
    2) Transform Matrix into upper triangular form.
    3) Back substitution
*/

#include<stdio.h>
int main()
{
    int i, j, k, n;
    float A[20][20], c, x[10], sum = 0.0;
    printf("\nENter the order of Matrix ");
    scanf("%d", &n);
    printf("\nEnter elements of augmented Matrix row wise\n");

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j<= (n+1); j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    for(j = 1; j <= n; j++) //loop for generation of upper triangular Matrix
    {
        for(i = 1; i <= n; i++)
        {
            if( i > j )
            {
                c = A[i][j] / A[j][j];
                for(k = 1; k<=n+1; k++)
                {
                    A[i][k] = A[i][k] - c *A[j][k];


                }
            }
        }
    }
    x[n] = A[n][n+1] / A[n][n];


    for(i = n-1; i>=1; i--) //Back substitution.
    {
        sum = 0;
        for(j = i+1; j <= n; j++)
        {
            sum = sum + A[i][j] * x[j];
        }
        x[i] =(A[i][n+1]-sum) / A[i][i];
    }
    printf("\nThe solution is : ");
    for(i = 1; i<= n;i++)
    {
        printf("\nx%d = %f\t", i, x[i]);
    }
}
