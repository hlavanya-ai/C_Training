
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;

};
void main()
{
    struct student s1;
    struct student *p=&s1;
    strcpy (p -> name,"shiva");
    p->age=17;
    p->marks=94.65;
    printf("%s ",p->name);

    printf("%f ",p->marks);

    printf("%d",p->age);
}
