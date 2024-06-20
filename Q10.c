#include<stdio.h>
int main()
{
    int s1,s2,s3;
    float r1,r2,r3,avg;
    printf("Enter the number of people who watched show 1\n");
    scanf("%d",&s1);
    printf("Enter the average rating for show 1\n");
    scanf("%f",&r1);
    printf("Enter the number of people who watched show 2\n");
    scanf("%d",&s2);
    printf("Enter the average rating for show 2\n");
    scanf("%f",&r2);
    printf("Enter the number of people who watched show 3\n");
    scanf("%d",&s3);
    printf("Enter the average rating for show 3\n");
    scanf("%f",&r3);
    avg=((s1*r1)+(s2*r2)+(s3*r3))/(s1+s2+s3);
    printf("The Overall average rating for the show is %.2f",avg);
}
