#include<stdio.h>
void main()
{
    int a,b,sum,diff,mul,div,rem;
    printf("Enter any two numbers:\n");
    scanf("%d %d", &a, &b);
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    printf("\n sum of the numbers are %d",sum);
    printf("\n Difference of the numbers are %d",diff);
    printf("\n multiplication of the numbers are %d",mul);
    printf("\n division of the numbers are %d",div);
    printf("\n Reminder of the numbers are %d",rem);
}
