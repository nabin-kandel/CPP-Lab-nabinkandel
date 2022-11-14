#include<iostream>
using namespace std;
class Account
{
	long int accountNumber;
	char accountName[30];
	char accountType[30];
	float balance;
	public:
		void setData()
		{
			cout<<"Enter Account number: "<<endl;
			cin>>accountNumber;
			cout<<"Enter Account name: "<<endl;
			cin>>accountName;
			cout<<"Enter Account Type: "<<endl;
			cin>>accountType;
			
		}
		void deposit()
		{
			float amount;
			cout<<"Enter amount to deposit: "<<endl;
			cin>>amount;
			balance += amount;
			cout<<"You have successfully deposited: "<<amount<<endl;
		}
		void withdraw()
		{
			float amount;
			cout<<"Enter amount to withdraw: "<<endl;
			cin>>amount;
			balance -= amount;
			cout<<"You have successfully withdrawn: "<<amount<<endl;
		}
		void displayBalance()
		{
			cout<<"Your Current Balance is: "<<balance<<endl; 
		}
		
};
int main()
{
	Account ac;
	ac.setData();
	ac.displayBalance();
	ac.deposit();
	ac.displayBalance();
	ac.withdraw();
	ac.displayBalance();
}
