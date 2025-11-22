
// a structure with three varibles name of the car ,maximam speed,prize,of car stroe in a array structres and it is played 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[100];
    float speed[100];
    int prize;

};
void main()
{
    int n;
    printf("enter the number of cars");
    scanf("%d",&n);
    struct car c[3];
    for(int i=0;i<3;i++)
    {
        printf("enter name car");
        scanf("%s",c[i].name);
         printf("enter the maximum speed of  car");
         scanf("%f",&c[i].speed);
         printf("enter the prize of car");
         scanf("%d",&c[i].prize);

    }
    for(int i=0;i<3;i++)
    {
        printf("%s\n",c[i].name);
        printf("%f\n",c[i].speed);
        printf("%d\n",c[i].prize);
    }

}