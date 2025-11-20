#include <stdio.h>
int squaring(int x,int y)
{
    int sqr=x*x+y*y;
    return sqr; 
}
void main() 
{
    int x=1,y=2;
    printf("square of two variable is" "%d",squaring(x,y));
}