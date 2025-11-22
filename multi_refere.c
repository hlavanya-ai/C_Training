
#include<stdio.h>
void prod_ref(int*a,int *b,int*c)
{
    int product=(*a)*(*b)*(*c);
    printf("%d",product);
}
void main()
{8
    int a=3;
    int b=2;
    int c=4;  

    prod_ref(&a,&b,&c);
}
