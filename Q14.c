#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the side of the square hall\n");
    scanf("%d",&a);
    printf("Enter the side of the square table placed for display\n");
    scanf("%d",&b);
    c=pow(a,2)-pow(b,2);
    printf("Area to be decorated is %d",c);
}