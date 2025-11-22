
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
    char name [100];
    char author [100];
    int year;

};
void main()
{
    int n;
    printf("enter the number of books");
    scanf("%d",&n);
     
    struct book b[1];
    for(int i=0;i<n;i++)
    
    {
        printf(" enter the name book:");
        scanf("%s",b[i].name);
         
     printf(" enter the  name of author:");
     scanf("%s",b[i].author);
      
     printf("enter the year publish:");
     scanf("%d",&b[i].year);
    }
    printf("your information :\n");

     for(int i=0;i<n;i++)
     {
        printf("%s\n",b[i].name);

        printf("%s\n",b[i].author);

        printf("%d\n",b[i].year);
     }
}
