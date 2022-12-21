#include<stdio.h>
int main()
{
    int i,diff,n,q,r,s=0,p=1;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        p=p*r;
        s+=r;
        q=q/10;
    }
    diff=(p-s);
    printf("%d",diff);
}        