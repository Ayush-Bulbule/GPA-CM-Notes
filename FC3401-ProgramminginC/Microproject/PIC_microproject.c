
#include <stdio.h>
struct Lib
{
    int RN, d, m, y, c;
    char N[20];
    char D[20];
    char B[20];
    char G[10];
};
int main()
{
    struct Lib a;
    int n;
    FILE *f1;

    printf("\n\n\t**************************************************************\n\n");
    printf("\t\t\tBOOK ISSUE SYSTEM OF LIBRARY");
    printf("\n\n\t**************************************************************\n\n");
    do
    {
        printf("\n\n\t\t\tEnter 1 : Save Student Info.\n");
        printf("\t\t\tEnter 2 : Display All Books issued\n");
        printf("\t\t\tEnter 3 : Exit\n");
        printf("\n\t\t\t**Enter Valid input**\n");

        printf("\n\t\tEnter:");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            f1 = fopen("C:/Users/AYUSH/Desktop/MCP-PIC/libr.dat", "r");
            if (f1 == NULL)
            {
                printf("File not Exist");
                break;
            }
            else
            {
                printf("\t\t\t\t\tRoll Number:");
                scanf("%d", &a.RN);
                printf("\t\t\t\t\tStudent Name(eg.Aditya_S_Deshpande):");
                scanf("%s", a.N);
                printf("\t\t\t\t\tDepartment:");
                scanf("%s", a.D);
                printf("\t\t\t\t\tBook issued:");
                scanf("%s", a.B);
                printf("\t\t\t\t\tGenre:");
                scanf("%s", a.G);
                printf("\t\t\t\t\tEnter Today's date (in dd mm yy format):");
                scanf("%d%d%d", &a.d, &a.m, &a.y);

                fwrite(&a, sizeof(a), 1, f1);
                fclose(f1);
                printf("\t\tRecord Saved!!\n");

                break;
            }

        case 2:
            f1 = fopen("C:/Users/AYUSH/Desktop/MCP-PIC/libr.dat", "rb");
            if (f1 == NULL)
            {
                printf("\t\tFile Not Exist\n");
                break;
            }
            else
            {
                while (fread(&a, sizeof(a), 1, f1))
                {
                    printf("\n\t\t\t\tRoll Number: %d", a.RN);
                    printf("\n\t\t\t\tStudent Name: %s", a.N);
                    printf("\n\t\t\t\tDepartment: %s", a.D);
                    printf("\n\t\t\t\tBook issued: %s", a.B);
                    printf("\n\t\t\t\tGenre: %s", a.G);
                    printf("\t\t\t\tIssued Date:%d/%d/%d\n\n\n", a.d, a.m, a.y);
                }
                fclose(f1);
                break;
            }
        case 3:
            printf("\t\tPress any Key to Exit....\n");
            break;
        default:
            printf("Invalid Input...\n");
        }
    } while (n != 3);
    return (0);
}
