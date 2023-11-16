#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char name[20];
    float mark;
};

void main()
{
    struct student s[3]; int i;
    printf("Enter students' info: \n");
    for(i=0; i<3; i++)
    {
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].mark);
    }
    for(i=0; i<3; i++)
    {
        printf("%d %s %f\n", s[i].rollno, s[i].name, s[i].mark);
    }
}
