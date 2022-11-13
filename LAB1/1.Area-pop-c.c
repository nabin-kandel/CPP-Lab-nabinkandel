#include<stdio.h>
int main()
{
    int length, breadth, area;
    printf("Enter The Lenghth and Breadth for Rectangle:");
    scanf("%d%d",&length,&breadth);
    area=length*breadth;
    printf("Your area is %d\n",area);

    return 0;
}