//Write C program to implement Lagrange's Interpolation method for finding x.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float x[10], y[10], temp = 1, f[10], sum, p;
    int i, n, j, k = 0, c;

    printf("\nHow many record you will write : ");
    scanf(" %d ", &n);

    for(i = 0; i<n; i++)
    {
        printf("\n\nEnter value of x%d: ", i);
        scanf("%f", &x[i]);
        printf("\n\nEnter the value of f(x%d): ", i);
        scanf("%d", &y[i]);
    }

    printf("\n\nEnter f(x) for finding x: ");
    scanf("%f", &p);

    for(i = 0; i<n; i++)
    {
        temp = 1;
        k = i;

        for(j = 0; j < n; j++)
        {
            if(k == j)
            {
                continue;
            }
            else
            {
                temp = temp * ((p - y[j]) / (y[k] - y[j]));
            }
        }
        f[i] = x[i] * temp;
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + f[i];
    }
    printf("\n\n* * *x = %f* * *", sum);
}
