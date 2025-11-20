// write a c function which will accept one input para meter r and returns the perimeter of circle , declare pi as constant 
#include <stdio.h>

float perimetr (int r)
{
const float pi= 3.14;
float p = 2*pi*r; 
return p;
}


void main()
{
    int r = 2;
    printf("%f",perimeter (r));
}