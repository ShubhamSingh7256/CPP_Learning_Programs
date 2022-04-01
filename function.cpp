#include<iostream>
using namespace std;

/*int sum(int a,int b)
{
    int add=a+b;

    return add;
}*/

void print_sum(int num)
{
    cout<<"The Sum is : "<<num<<endl;
}

void printsum(int a,int b)
{
    int add=a+b;

    print_sum(add);
}

int main()
{
    int num1,num2;

    cout<<"Enter num1"<<endl;
    cin>>num1;

    cout<<"Enter num2"<<endl;
    cin>>num2;

    //int Total=sum(num1,num2);

    // cout<<"The Sum is : "<<Total<<endl;

    printsum(num1,num2);

    return 0;
}