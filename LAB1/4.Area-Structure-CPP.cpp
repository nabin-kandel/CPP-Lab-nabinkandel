#include<iostream>
using namespace std;
struct Rectangle
{
    private:
        int Length,Breadth;
    public:
        void setData(int l,int b)
        {
            Length=l;
            Breadth=b;
        }

        int getArea()
        {
            return(Length*Breadth);
        }
};

int main()
{
    Rectangle r1;
    int l,b,area;
    cout<<"Enter the Length and breadth For Rectangle :";
    cin>>l>>b;
    r1.setData(l,b);
    area=r1.getArea();
    cout<<"\n Area of the Rectangle="<<area;
}