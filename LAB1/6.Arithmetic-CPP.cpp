#include<iostream>
using namespace std;
class Arithmetic
{
    int fn;
    int sn;
    public:
        void setData(int f,int s)
        {
            fn=f;
            sn=s;
        }
        void displayAdd()
        {
            cout<<"Sum:"<<(fn+sn)<<endl;
        }
        void displaySub()
        {
            cout<<"Sub:"<<(fn-sn)<<endl;
        }
        void displayMul()
        {
            cout<<"Mul:"<<(fn*sn)<<endl;
        }
        void displayDiv()
        {
            cout<<"Div:"<<(fn/sn)<<endl;
        }
};
int main()
{
    Arithmetic a1,a2;
    a1.setData(6,3);
    a2.setData(10,2);
    cout<<"Result of First Object:"<<endl;

    a1.displayAdd();
    a1.displaySub();
    a1.displayMul();
    a1.displayDiv();

    cout<<"Result of Second Object:"<<endl;
    a2.displayAdd();
    a2.displaySub();
    a2.displayMul();
    a2.displayDiv();
}