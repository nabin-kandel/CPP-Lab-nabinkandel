//Quadratic Equation
#include<iostream>
#include<math.h>
using namespace std;

void getRoot(int,int,int);
class Quadratic
{
	int a,b,c;
	public:
		void setData(int a1,int b1,int c1)
		{
			a=a1;
			b=b1;
			c=c1;
		}
		void displayRoot()
		{
			getRoot(a, b, c);
		}
};
void getRoot(int a,int b,int c)
{
	float determinant,root[2];
	determinant = ((b*b)-4*a*c);
	if(determinant>=0)
	{
		root[0]=(-b+sqrt(determinant))/2*a;
		root[1]=(-b-sqrt(determinant))/2*a;
		cout<<"The real roots are:"<<root[0]<<" and "<<root[1];
	}
	else{
		cout<<"The roots are imaginary.";
	}
}
int main()
{
	Quadratic q;
	int a,b,c;
	cout<<"Enter a,b,c:"<<endl;
	cin>>a>>b>>c;
	q.setData(a,b,c);
	q.displayRoot();
}
