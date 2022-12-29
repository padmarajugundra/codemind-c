#include<stdio.h>
int main()
{
    int i,n,s,avg,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) 
    {
        s+=a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    printf("True");
    else
    printf("False");
    
}