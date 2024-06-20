#include<stdio.h>
int main()
{
    double a,b,c,d,sum;
    printf("Enter branding expenses\n");
    scanf("%lf",&a);
    printf("Enter travel expenses\n");
    scanf("%lf",&b);
    printf("Enter food expenses\n");
    scanf("%lf",&c);
    printf("Enter logistics expenses\n");
    scanf("%lf",&d);
    sum=a+b+c+d;
    printf("Total expenses : Rs.%.2lf\n",sum);
    printf("Branding expenses percentage : %.2lf%%\n",(a/sum)*100);
    printf("Travel expenses percentage : %.2lf%%\n",(b/sum)*100);
    printf("Food expenses percentage : %.2lf%%\n",(c/sum)*100);
    printf("Logistics expenses percentage : %.2lf%%\n",(d/sum)*100);
}
