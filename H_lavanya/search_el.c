
#include<stdio.h>
int search (int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return 1;

    }
    return 0;
}
void main ()
{
    int arr[4]={45,76,34,4778};
    int key;
    int n=4;
    printf("what are u search?");
    scanf("%d",&key);
    printf("%d",search(arr,key,n));
}