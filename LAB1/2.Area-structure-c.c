#include<stdio.h>
struct Rectangle
{
    int length,breadth;
};
int main()
{
    struct Rectangle r1;
    int area;
    printf("Enter the Length and breadth For Rectangle :");
    scanf("%d%d",&r1.length,&r1.breadth);
    area=r1.length*r1.breadth;
    printf("Area of Raectangle =%d\n",area);

    return 0;
}