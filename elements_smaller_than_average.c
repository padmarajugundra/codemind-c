#include<stdio.h>
int main()
{
   int n,i,avg,c=0;
  scanf("%d",&n);
  int a[n];
  int s=0;
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      s=s+a[i];
  }
  avg = s/n;
  for(i=0;i<n;i++)
  {
    if(a[i]<=avg)
     {
        c++;
     }
  }
  printf("%d",c);
}