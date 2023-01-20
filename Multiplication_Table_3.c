#include<stdio.h>
int main()
{
    int n,i,n1,n2;
    scanf("%d%d%d",&n,&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}