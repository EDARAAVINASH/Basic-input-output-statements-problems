#include<stdio.h>
int main()
{
    char a[50],b[50];
    char d;
    int c;
    double e;
    printf("Enter the name of the event\n");
    gets(a);
    printf("Enter the type of the event\n");
    gets(b);
    printf("Enter the number of people expected\n");
    scanf("%d",&c);
    printf("Is it a paid entry? (Type Y or N)\n");
    scanf("%c",&d);
    d=getchar();
    printf("Enter the projected expenses (in lakhs) for this event\n");
    scanf("%lf",&e);
    printf("Event Name : %s\n",a);
    printf("Event Type : %s\n",b);
    printf("Expected Count : %d\n",c);
    printf("Paid Entry : %c\n",d);
    printf("Projected Expense : %.1lfL\n",e);
}
