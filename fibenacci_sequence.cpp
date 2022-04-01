#include<iostream>
using namespace std;

void print(int number)
{
    cout<<number<<",";
}

void fib(int num)
{
    int f;
    int b0=0;
    int b1=1;

    if(num==1)
    {
        f=0;
    }
    else if(num==2)
    {
        f=1;
    }

    else
    {
        for(int i=3;i<=num;i++)
        {
            f=b0+b1;
            b0=b1;
            b1=f;
        }
    }

    print(f);
}

int main()
{
    int n;

    cout<<"Enter num of digits to fin Fibenacci :"<<endl;
    cin>>n;

    fib(n);
    return 0;
}