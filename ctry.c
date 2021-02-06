#include<stdio.h>
void main()
{
    float r,a,c,d;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    a=r*r*3.14;
    c=2*3.141*r;
    d=2*r;
    printf("\nThe diameter of the circle is %f",d);
    printf("\nthe area of the circle is %f",a);
    printf("\nThe circuference of the circle is %f",c);

}
