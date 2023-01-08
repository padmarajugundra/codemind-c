#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t;
    scanf("%lf%lf%lf",&p,&r,&t);
    double ci=p*pow((1.0+r/100.0),t);
    
    printf("%.2lf",ci);
}