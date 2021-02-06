#include<stdio.h>
void main()
{
    float phy,chem,bio,math,com,sum,per;
    printf("Enter the marks of all the subjects \n");
    scanf("%f %f %f %f %f", &phy, &chem, &bio, &math, &com);
    sum=phy+chem+bio+math+com;
    per=sum/5;
    if(per>=90.0f)
        printf("Grade is 'A'");
    else if(per>=80.0f)
        printf("Grade is 'B'");
    else if(per>=70.0f)
        printf("Grade is 'C'");
    else if(per>=60.0f)
        printf("Grade is 'D'");
    else if(per>=40.0f)
        printf("Grade is 'E'");
    else
        printf("Grade is 'F'");
}
