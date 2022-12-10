#include<stdio.h>
int main()
{
    int n;
    float k=0;
    float f;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k+=a[i];
        f=k/n;
    }
    printf("%.2f",f);
    
}