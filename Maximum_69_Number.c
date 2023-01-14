#include<stdio.h>
int main()
    {
        int n,temp,c=0;
        scanf("%d",&n);
        int arr[100],i=0;
        while(n>0)
        {
            temp=n%10;
            arr[i++]=temp;
            n=n/10;
            c++;
        }
        for(i=c-1;i>=0;i--)
        {
            if(arr[i]==6)
            {
                arr[i]=9;
                break;
            }
        }
        for(i=c-1;i>=0;i--)
        {
            printf("%d",arr[i]);
        }
    }