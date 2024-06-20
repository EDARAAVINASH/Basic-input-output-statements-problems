#include<stdio.h>
int main()
{
    int n,t=0,q=0;
    scanf("%d",&n);
    int a[]={100,50,10,5,2,1};
    for(int i=0;i<6;i++)
    {
        t=(n/a[i]);
        n=n-(t*a[i]);
        q=q+t;
    }
    printf("%d\n",q);
    return 0;
}