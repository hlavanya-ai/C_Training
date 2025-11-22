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
    strcpy (s1.name,"shiva");
    s1.age=23;
    s1.marks=76.65;
    


    struct student s2;
    strcpy (s2.name,"paru");
    s2.age=19;
    s2.marks=89.5;
    
    
     struct student s3 = {"lavanya",20,54.22};

    printf("%s",s2.name);
    printf("%f",s3.marks);
    
}