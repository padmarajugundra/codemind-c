#include<stdio.h>
int main()
{
    int e,t,x,tot;
    scanf("%d%d%d",&x,&e,&t);
    tot=((1*e)+(2*t));
    if(tot>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}