
//write a c programm with a function varetic varible
#include<stdio.h>
#include<stdarg.h>
void add(int count,...)
{
    va_list count ;
    va_start(list,count);
    for(int i=1;i<count;i++)
    {
        int n=va_arg(bag,int);
        result =result +n;
    }
    va_end(bag);
    printf("%d",result);
    }
    void main()
    {
        add(3,51,1,1);
    }

