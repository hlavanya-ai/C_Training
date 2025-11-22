
// write a c programm by call it reference
#include<stdio.h>
void sum_ref(int*a,int*b,int*c)
{
    int sum=*a+*b+*c;
    printf("%d",sum);
}
void main()
{
    int a=5;
    int b=71;
    int c=2;

    sum_ref(&a,&b,&c);

}

