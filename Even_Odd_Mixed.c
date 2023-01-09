#include<stdio.h>
int main()
{
    int n,i,c=0,k=0,p=0;
    scanf("%d",&n);
    while(n!=0)
    {
        int r=n%10;
        if(r%2==0)
        {
            c++;
        }
        else
        {
            k++;
        }
        n=n/10;
        p++;
    }
    if(c==p)
    printf("Even");
    else if(k==p)
    printf("Odd");
    else 
    printf("Mixed");
}