#include<stdio.h>
int main ()
{
    int n;
    printf("enter length");
    scanf("%d",&n);
    int a[n],i,j,c, min=0, max=n-1, mid,x;
    printf("enter length");
    for(i=0; i<=n-1; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<=n-2; i++)
    {
        for(j=i+1; j<=n-1; j++)
    {
    if(a[i]>a[j])
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
    }
    }
    printf("enter element to be searched:");
    scanf("%d", &x);
    mid=(min+max)/2;
    while(min<=max)
    {
        if(a[mid]>x)
    {
    max=mid-1;
    }
    else if(a[mid]<x)
    {
        min=mid+1;
    }
    else
    {
        printf("%d", mid);
        break;
    }
    }
    mid=(min+max)/2;
    if(min>max)
    {
        printf("element doesn't exits");
    }
    return 0;
    }