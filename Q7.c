#include<stdio.h>
int main()
{
    int x,y,a,b,c;
    printf("Enter the value of X\n");
    scanf("%d",&x);
    printf("Enter the value of Y\n");
    scanf("%d",&y);
    a=(y-(5*x))/13;
    b=a+10;
    c=a*2;
    printf("Number of children tickets sold : %d\n",a);
    printf("Number of adult tickets sold : %d\n",b);
    printf("Number of senior tickets sold : %d",c);
}