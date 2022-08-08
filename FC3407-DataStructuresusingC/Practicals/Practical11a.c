#include <stdio.h>
main()
{
    int num[50];
    int i, N;

    printf("Enter the number of elements : ");
    scanf("%d", &N);

    printf("Enter the elements : ");
    for (i = 0; i < N; i++)
        scanf("%d", &num[i]);

    printf("Reverse list order : ");
    for (i = N - 1; i >= 0; i--)
        printf("%d\t", num[i]);
}
