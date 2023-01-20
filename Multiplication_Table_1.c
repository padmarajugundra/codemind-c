#include<stdio.h>
int main()
{
    int n,i,n1;
    scanf("%d%d",&n,&n1);
    for(i=1;i<=12;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}