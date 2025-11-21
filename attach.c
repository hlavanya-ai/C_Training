
#include<stdio.h>
void names (char first[],char last[],int sw)
{
    int i=0;
    char  full[100]; 
    while (first[i]!='\0')// adding first
    {
        full[i]=first[i];
        i++;
    }
    full[i]=' ';//adding space
    i++;
    int j=0;
    while(last[j]!='\0')
    {
        full[i]=last[j];
        i++;  
        j++;
    }
    full[i]='\0';
    printf("%s",full);
int len=i++;
printf("%d\n",len);
if(len<sw)
printf("fits in screen");
else 
printf(" does not fits in screen!");



    }
        void main()
    {
        char first[100]="Bhavana";
        char last[100]="Sree";
        int sw=7;
        names(first,last,sw);
    }
