
#include<stdio.h>
#include<stdlib.h>

 void  main()
{    
        int*p=(int*)malloc(4*sizeof(int));
        p[0]=78;
        p[1]=544;
        p[2]=33;
        p[3]=54;
        printf("%d",p[2]);
        free(p);
    }
