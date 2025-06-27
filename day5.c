//prog to find diffrence between min and max element in array
#include<stdio.h>
int min(int a[],int size)
{
    int n;
    int key1=a[0];
    for(int i=0;i<n;i++)
    {
        if(key1>a[i])
        {
            key1=a[i];
        }
    }
    return key1;
}
int max(int b[],int size)
{
    int n;
    int key2=b[0];
    for(int i=0;i<n;i++)
    {
        if(key2>b[i])
        {
            key2=b[i];
        }
    }
    return key2;
}
int main()
{
    int n;
    int a[]={10,70,30,40,20};
    printf("maximum element:",max(a,n));
    printf("minimum element :",min(a,n));
    int res=max-min;
    printf("diffrence:%d",res);

    
    return 0;

}