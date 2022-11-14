//Class Temperature 

#include<iostream>
using namespace std;
class Temprature
{
	float t;
		public:
			void setData(int temp)
			{
				t=temp;
			}
			
			void convertTOcelcius()
			{
				cout<<"THE GIVEN TEMP IS IN Fahrenheit="<<((5*t-160)/9)<<endl;
			}
			void convertTofahrenheit()
			{
				cout<<"THE GIVEN TEMP IS IN Celcius="<<((9*t+160)/5)<<endl;
			}
};
int main()
{
	Temprature t1;
	int tem1,tem2;
	cout<<"Enter the temprature in degree Fahrenheit:"<<endl;
	cin>>tem1;
	t1.setData(tem1);
	t1.convertTOcelcius();
	cout<<"\nEnter the temprature in degree Celcius:"<<endl;
	cin>>tem2;
	t1.setData(tem2);
	t1.convertTOcelcius();	
}




