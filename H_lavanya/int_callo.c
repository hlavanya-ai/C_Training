
#include<stdio.h>
#include<stdlib.h>
void main()
{
    float*p=(float*)calloc(4,sizeof(float ));
    p[0]=65.7;
    p[1]=7.54;
    p[2]=5.4;
    p[3]=65.0;
    printf("%f",p[1]);
free(p);
}
