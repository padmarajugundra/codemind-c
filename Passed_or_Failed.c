#include<stdio.h>
int main()
{
    int c,m,p,cp,e;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&cp);
    if(e>34&&m>34&&p>34&&c>34&&cp>34)
    printf("PASSED");
    else
    printf("FAILED");
}