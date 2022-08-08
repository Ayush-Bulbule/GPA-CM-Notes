//Write C program to solve the given system of linear equation using Newton Raphson Method.

#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) pow(x, 3)-4*x+1
#define df(x) 3*x*x-4

int main()
{
    float x0, x1, f0, f1, df0;
    int i= 0;
    printf("Enter the value of x0 : ");
    scanf("%f", &x0);

    do
    {
        f0=f(x0);
        df0=df(x0);
        x1 = x0-(f0/df0);
        f1 = f(x1);
        x0 = x1;
        i++;
        printf("No. of iteration = %d\t", i);
        printf("Root = %f\t", x1);
        printf("Value of function = %f\n", f1);
    }while(fabs(f1)>e);
}
