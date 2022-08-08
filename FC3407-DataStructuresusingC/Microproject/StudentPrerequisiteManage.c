#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

FILE *fptr;
struct Course
{
    char courseCode[8];
    char courseName[30];
    int courseCredits;
    char coursePrereqCode[20];
};
struct CourseList
{
    struct Course data;
    struct CourseList *next;
};
void printCourseList(struct CourseList *ptr)
{
    while (ptr != NULL)
    {
        printf("\nCourse Code = %s", ptr->data.courseCode);
        printf("\nCourse Name = %s", ptr->data.courseName);
        printf("\nCourse credit = %d\n", ptr->data.courseCredits);
        ptr = ptr->next;
    }
}
struct CourseList *addToCourse(struct CourseList *ls, struct Course s)
{
    struct CourseList *ptr = ls;
    if (!strcmp(s.coursePrereqCode, "NULL") || !strcmp(s.coursePrereqCode, "null"))
    {
        printf("\nYou can enroll For  this Prerequisites required this Course!!");
        getch();
    }
    else
    {
        int flag = 0;
        struct CourseList *p = ls;
        while (p != NULL)
        {
            if (strcmp(s.coursePrereqCode, ptr->data.courseCode))
            {
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            p = p->next;
        }
        if (flag == 0)
        {
            printf("\n**You Cannot Enroll For this Course!!You Have Not Completed the Prerequisites!!");
            getch();
            return ls;
        }
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = (struct CourseList *)malloc(sizeof(struct CourseList));
    ptr = ptr->next;
    strcpy(ptr->data.courseCode, s.courseCode);
    strcpy(ptr->data.courseName, s.courseName);
    strcpy(ptr->data.coursePrereqCode, s.coursePrereqCode);
    ptr->data.courseCredits = s.courseCredits;
    ptr->next = NULL;
    printf("\nCourse Added Successfully\n");
    return ls;
}
struct Course addCourseInfo(struct Course s)
{
    printf("Enter Course Code: ");
    fflush(stdin);
    gets(s.courseCode);
    printf("Enter Course Name: ");
    gets(s.courseName);
    printf("Enter Course Prerequisite(Null For None): ");
    gets(s.coursePrereqCode);
    printf("Enter Course Credit: ");
    scanf("%d", &s.courseCredits);
    return s;
}

int main()
{

    struct Course s;
    s.courseCredits = 0;
    struct CourseList *ls;
    ls = (struct CourseList *)malloc(sizeof(struct CourseList));
    strcpy(ls->data.courseCode, "");
    strcpy(ls->data.courseName, "");
    strcpy(ls->data.coursePrereqCode, "");
    ls->next = NULL;
Menu:
    system("cls");
    printf("\n************************************************\n");
    printf("\tStudent Prerequisite Management");
    printf("\n************************************************\n");
    printf("\n\t 1. Enroll a new Course\n");
    printf("\t 2. Display lists of Courses enrolled\n");
    printf("\t 3. To quit\n");
    printf("\n\tEnter Your Choise: ");
    int ch;
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:

        if (s.courseCredits == 0)
        {
            s = addCourseInfo(s);
            ls->data = s;
            ls->next = NULL;
            printf("Course Added Success Fully!!");
            getch();
            fptr = fopen("coursefile.txt", "wb");
            fwrite(ls, sizeof(ls), 1, fptr);
        }
        else
        {
            s = addCourseInfo(s);
            ls = addToCourse(ls, s);
            getch();
            printCourseList(ls);
        }
        goto Menu;
    case 2:
        system("cls");
        printf("Your Enrolled Courses Are:\n");
        printCourseList(ls);
        getch();
        goto Menu;

    case 3:

        system("cls");
        printf("Do You Sure Wanna to EXIT>> (Y/N)?: ");
        char e;
        scanf("%c", &e);
        if (e == 'Y' || e == 'y')
            exit(0);
        goto Menu;

    default:

        goto Menu;
    }
    getch();
    return 0;
}