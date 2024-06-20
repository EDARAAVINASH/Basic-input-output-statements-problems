#include<stdio.h>
int main()
{
    int n,x,y;
    printf("Enter the total salary paid\n");
    scanf("%d",&n);
    x=(n+500)/130;
    y=(n-x*80)/50;
    printf("Number of weekday hours is %d\n",x);
    printf("Number of weekend hours is %d",y);
    
    
}