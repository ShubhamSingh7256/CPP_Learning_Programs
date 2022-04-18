#include<iostream>
using namespace std;

void add(int n1,int n2)
{
    int s=n1+n2;
    cout<<"The sum of "<<n1<<" and "<<n2<<" is : "<<s<<endl;
}

int main()
{
    int num1,num2;
    cout<<"Enter two integers :"<<endl;
    cin>>num1>>num2;
    add(num1,num2);
    //add(num1,num2);
    //add(num1,num2);
    //add(num1,num2);
    return 0;
}