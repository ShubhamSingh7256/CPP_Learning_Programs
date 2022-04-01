#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter num1 "<<endl;
    cin>>num1;
    cout<<"Enter num2 "<<endl;
    cin>>num2;

    char op;

    cout<<"Enter operator "<<endl;
    cin>>op;

    switch(op)
    {
        case '+' : cout<<num1+num2<<endl;
        break;

        case '-' : cout<<num1-num2<<endl;
        break;

        case '*' : cout<<num1*num2<<endl;
        break;

        case '/' : cout<<num1/num2<<endl;
        break;

        case '%' : cout<<num1%num2<<endl;
        break;

        default : cout<<"Please select a valid operator ......(+,-,*,/)......"<<endl;
        break;

    }
}